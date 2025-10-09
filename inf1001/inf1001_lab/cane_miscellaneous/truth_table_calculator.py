
from sympy.logic import SOPform, POSform
from sympy import symbols, simplify_logic

primes = [0]

for i in range(2, 0xff):
    is_prime = True
    for f in range(2, int(i ** 0.5) + 1):
        if i % f == 0:
            is_prime = False
            break
    if is_prime: primes.append(i)

dontcares = []
for i in range(2, 0xff):
    if i not in primes:
        dontcares.append(
            [int(char) for char in bin(i)[2:].zfill(8)]
        )

next_state = primes[2:] + [primes[1]]
next_state = [2] + next_state
for a in zip(primes, next_state):
    print(a)

equations = []
q0, q1, q2, q3, q4, q5, q6, q7 = symbols('q0 q1 q2 q3 q4 q5 q6 q7')
for bit in range(7, -1, -1):
    minterms = []
    for prime, state in zip(primes, next_state):
        if state&(0b1 << bit):
            minterms.append(
                [int(char) for char in bin(prime)[2:].zfill(8)]
            )
    evaluate = POSform([q0, q1, q2, q3, q4, q5, q6, q7], minterms, dontcares)
    equations.append(evaluate)


for prime in primes:
    results = []
    i = [int(_) for _ in bin(prime)[2:].zfill(8)]
    subs = {
        q0: i[0],
        q1: i[1],
        q2: i[2],
        q3: i[3],
        q4: i[4],
        q5: i[5],
        q6: i[6],
        q7: i[7]
    }
    for equation in equations:
        result = int(bool(equation.subs(subs)))
        results.append(result)
    print(prime, i, results)    

for i, equation in enumerate(equations):
    print(f'\nequation q{i}+')
    print('---')
    equation = str(equation)
    delimiter = '&' if equation.count('&') < equation.count('|') else '|'
    for a, z in enumerate(equation.split(delimiter)):
        print(a, z.strip(' '))


