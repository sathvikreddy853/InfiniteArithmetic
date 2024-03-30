input_numbers = []
output_numbers = []

def CheckInput(inputFile):
    with open(inputFile, 'r') as input:
        for ln, line in enumerate(input):
            if ln == 0:
                continue

            num1, num2 = map(int, line.strip().split())
            input_numbers.append((num1, num2))  


def CheckOutput(outputFile):
    with open(outputFile, 'r') as output:
        for line in output:
            ans = int(line.strip())
            output_numbers.append(ans)


def Verify():
    for index, tuple in enumerate(input_numbers):
        if tuple[0] * tuple[1] == output_numbers[index]:
            # print(f"Line {index + 1}: True")
            pass
        else:
            raise Exception(f"Line {index + 1}: Value Not Matching")
            # print(f"Line {index + 1}: False")


if __name__ == "__main__":
    CheckInput('./utils/Integer_Input.in')
    CheckOutput('./utils/Multiplication_Output.out')
    Verify()
