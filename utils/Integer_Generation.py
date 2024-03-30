from random import randint

def RandomInteger():
    max_range = 99999999999999999999999999999999999999999999999

    num1 = randint(-max_range, max_range)
    num2 = randint(-max_range, max_range)

    return (num1, num2)

def GenerateFile(fileName, noTestCases):
    with open(fileName, 'w') as output:
        output.write(f"{noTestCases}\n")
        for _ in range(noTestCases):
            tuple = RandomInteger()
            output.write(f"{tuple[0]}\t{tuple[1]}\n")

if __name__ == "__main__":
    GenerateFile('./utils/Integer_Input.in', 100000)