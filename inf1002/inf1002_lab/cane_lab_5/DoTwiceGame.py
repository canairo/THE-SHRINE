import sys

double = lambda x: x+x
square = lambda x: x*x
cube = lambda x: x*x*x

funcs = [0, double, square, cube]

def DoTwiceGame():
    try:
        num, opt = map(int, sys.argv[1:])
        print(funcs[opt](funcs[opt](num)))
    except:
        print("It cannot be supported!")

if __name__ == "__main__":
    DoTwiceGame()
