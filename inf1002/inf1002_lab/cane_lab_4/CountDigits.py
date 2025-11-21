

import sys

def rc(num):
    if len(num) == 0:
        return 0
    else: return 1 + rc(num[1:])

def it(num):
    return len(str(num))

def CountDigits():
    num = sys.argv[1]
    print(f"The number of digit(s) calculated by recursive is {rc(num)} and by iterative is {it(num)}.")


if __name__ == "__main__":
    CountDigits()



