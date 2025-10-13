import random
from sympy import symbols, simplify_logic
from sympy.logic.boolalg import And, Or, Not

def random_boolean_postfix(num_operands=4):
    """Generate a random *valid* postfix boolean expression."""
    operands = ['A', 'B', 'C', 'D', 'E']
    operators = ['~', '&', '|']  # NOT, AND, OR
    tokens = []
    stack_depth = 0
    operands_used = 0
    operators_used = 0

    while operands_used < num_operands or stack_depth > 1:
        can_place_operand = operands_used < num_operands
        can_place_binary = stack_depth >= 2
        can_place_unary = stack_depth >= 1

        # Decide what to place next
        choices = []
        if can_place_operand:
            choices.append("operand")
        if can_place_binary:
            choices.append("binary")
        if can_place_unary and random.random() < 0.2:
            choices.append("unary")  # occasionally place ~

        choice = random.choice(choices)

        if choice == "operand":
            token = random.choice(operands)
            tokens.append(token)
            operands_used += 1
            stack_depth += 1
        elif choice == "binary":
            token = random.choice(['&', '|'])
            tokens.append(token)
            stack_depth -= 1  # binary operator consumes 2 → produces 1
        elif choice == "unary":
            tokens.append('~')
            # stack_depth unchanged (NOT consumes and produces 1)

    return tokens


def postfix_to_sympy(tokens):
    """Convert a postfix boolean expression to a Sympy expression."""
    A, B, C, D, E = symbols('A B C D E')
    stack = []
    mapping = {'A': A, 'B': B, 'C': C, 'D': D, 'E': E}

    for token in tokens:
        if token in mapping:
            stack.append(mapping[token])
        elif token == '~':
            a = stack.pop()
            stack.append(Not(a))
        elif token == '&':
            b = stack.pop()
            a = stack.pop()
            stack.append(And(a, b))
        elif token == '|':
            b = stack.pop()
            a = stack.pop()
            stack.append(Or(a, b))
    return stack[0]


def random_simplified_boolean(num_operands=4):
    tokens = random_boolean_postfix(num_operands)
    expr = postfix_to_sympy(tokens)
    simplified = simplify_logic(expr, form='dnf')
    return ' '.join(tokens), expr, simplified


# Example usage
for _ in range(10):
    postfix, expr, simplified = random_simplified_boolean(num_operands=10)
    print(f"Sympy:   {expr}")
    print(f"Simplified: {simplified}")
    print("-" * 50)

