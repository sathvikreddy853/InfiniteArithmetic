# utils/Integer_Division_Checker.py

# run the Calc using:
#       time ./Calculator < utils/Integer_Input.in > utils/Division_Output.out

# run the checker using: 
#       python utils/Integer_Division_Checker.py

from Int_Checker import *

def Verify():
    for index, tuple in enumerate(input_numbers):
        result = tuple[0] // tuple[1] 
        result += 1 if result < 0 else 0
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
