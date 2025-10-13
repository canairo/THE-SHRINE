from sympy.logic import SOPform, POSform
from sympy import symbols, simplify_logic


def to_bitarray(a: int, bits: int) -> list:
    z = bin(a)[2:].zfill(bits)
    return [*map(int, z)]


minterms = {
    k: [] for k in range(8)
}

for i in range(0, 0x10):
    bits = to_bitarray(i * i, 8)
    for idx in range(8):
        if bits[idx]:
            minterms[idx].append(to_bitarray(i, 4))

q0, q1, q2, q3 = symbols('q0 q1 q2 q3')
for idx in minterms:
    eval = POSform([q0, q1, q2, q3], minterms[idx])
    print(idx, eval)
