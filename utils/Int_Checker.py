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