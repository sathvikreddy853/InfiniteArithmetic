# utils/Addition_Checker.py

# run the Calc using:
#       time ./Calculator < utils/Integer_Input.in > utils/Subtraction_Output.out                                               

# run the checker using: 
#       python utils/Subtraction_Checker.py

from Int_Checker import *

def Verify():
    for index, tuple in enumerate(input_numbers):
        if tuple[0] - tuple[1] == output_numbers[index]:
            # print(f"Line {index + 1}: True")
            pass
        else:
            raise Exception(f"Line {index + 1}: Value Not Matching")
            # print(f"Line {index + 1}: False")


if __name__ == "__main__":
    CheckInput('./utils/Integer_Input.in')
    CheckOutput('./utils/Addition_Output.out')
    Verify()
