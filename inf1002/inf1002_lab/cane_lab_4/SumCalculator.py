

import sys

def rc(num):
    if num == 0:
        return 0
    else: return num + rc(num - 1)

def it(num):
    return sum(range(num + 1))

def SumCalculator():
    num = int(sys.argv[1])
    print(f"The SUM value calculated by recursive is {rc(num)} and by iterative is {it(num)}.")
if __name__ == "__main__":
    SumCalculator()


