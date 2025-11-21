import sys

def scale(list1, x):
    return [*map(lambda num: num*x, list1)]

def sort(list1):
    return sorted(list1, key = lambda x: str(x)[-1])

def goodSales(list1):
    return [i for i in list1 if i > (sum(list1) / len(list1))]

def SalesAnalytics():
    list1 = [*map(int, sys.argv[1].split(','))]
    x = int(sys.argv[2])
    print(f"The scaled numbers are: {scale(list1, x)}", end='')
    print(f"The sorted sales numbers are: {sort(list1)}", end='')
    print(f"The good sales numbers are: {goodSales(list1)}")
    
if __name__ == "__main__":
    SalesAnalytics()
