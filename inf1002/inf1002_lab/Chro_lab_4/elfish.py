r'''
Task Description: 
     A word is considered elfish if it contains the letters: e, l and f in it, in any 
     order. For instance, we would say that the following words are elfish: tasteful, 
     whiteleaf, unfriendly and waffles, because they each contain those letters. Use 
     the recursive function to implement this. Write one program to call your recursive 
     function and tell the user whether the input word is one elfish or not. 
     
     HINT: You can recursively reduce both the elfish letters and input word. 
     The sample executions are provided as follows:

Note: 
     Your output should be in ONE line

Running example: 
     C:\INF1002\Lab4\elfish> python elfish.py waffles
     waffles is one elfish word!

     C:\INF1002\Lab4\elfish> python elfish.py instance
     instance is not an elfish word!
'''

import sys

# you can use sys.argv[1] to get the first input argument.
# sys.argv[2] is the second argument, etc.

def elfish():
     print(check(sys.argv[1]))


def check(x):
     if len(x) == 0:
          return None
     
     elif "e" and "l" and "f" in x:
          return f"{x} is one elfish word!"
     
     else:
          check(x[1:len(x)])
          return f"{x} is not an elfish word!"

if __name__=='__main__':
     elfish()