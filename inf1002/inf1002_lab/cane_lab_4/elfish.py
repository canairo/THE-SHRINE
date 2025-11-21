

import sys

def rc(word, l):
    if all(l): return True
    if len(word) < 1: return False
    else:
        char = word[0]
        if char in "elf":
            l["elf".index(char)] = 1
        return rc(word[1:], l)

def elfish():
    word = sys.argv[1]
    if rc(word, [0,0,0]):
        print(f"{word} is one elfish word!")
    else:
        print(f"{word} is not an elfish word!")

if __name__ == "__main__":
    elfish()


