# utils/Integer_Division_Checker.py

# run the Calc using:
#       time ./Calculator < utils/Integer_Input.in > utils/Division_Output.out

# run the checker using: 
#       python utils/Integer_Division_Checker.py

from Int_Checker import *
from math import floor

def Verify():
    for index, tuple in enumerate(input_numbers):
        
        sign = 0

        if tuple[0] < 0:
            sign += 1
        if tuple[1] < 0:
            sign += 1
        
        result = abs(tuple[0])/abs(tuple[1])
        result = floor(result)
        result = -result if sign == 1 else result

        if result == output_numbers[index]:
            # print(f"Line {index + 1}: True")
            pass
        else:
            raise Exception(f"Line {index + 1}: Value Not Matching")       
            # print(f"Line {index + 1}: False")


if __name__ == "__main__":
    CheckInput('./utils/Integer_Input.in')
    CheckOutput('./utils/Division_Output.out')
    Verify()