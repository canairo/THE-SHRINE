r'''
Task Description: 
      In this task, we need to design one recursive function digit_recursive(x) to 
      calculate how many digits a positive number has. For instance, 10 has two 
      digits, and 122 has three digits, and 5679 has four digits. HINT: The number 
      of digits can be calculated by repeatedly dividing by 10 (without keeping the 
      remainder) until the number is less than 10. 

      Please write another function digit_iterative(x) to achieve the same 
      functionality to calculate the number of the digits of x but uses while loop. 
      Write one main program to allow users to input one number and call these two 
      functions to evaluate the output.

      The example executions are shown as follows: 
      
Note: 
      Your output should be in ONE line

Running example:
      C:\INF1002\Lab4\CountDigits> python CountDigits.py 789
      The number of digit(s) calculated by recursive is 3 and by iterative is 3.
'''
import sys

# you can use sys.argv[1] to get the first input argument.
# sys.argv[2] is the second argument, etc.

def digit_recursive(x):
      if x == 0:
            return 0
      return digit_recursive(x // 10) + 1


 
def digit_iterative(x):
      count = 0
      while x != 0:
            x = x // 10
            count += 1
      return count


def CountDigits():
      print(f"The number of digit(s) calculated by recursive is {digit_recursive(int(sys.argv[1]))} and by iterative is {digit_iterative(int(sys.argv[1]))}.")

if __name__=='__main__':
      CountDigits()
      



