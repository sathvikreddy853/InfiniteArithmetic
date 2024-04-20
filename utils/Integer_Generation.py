import random
from random import randint

# run the generator using 
#       python utils/Integer_Generation.py

def RandomInteger():
    max_range1 = 100000000000000000000000000000000000000000000
    max_range2 = 1000000000000000000000000000000000000000

    if random.random() < 0.005:
        num1 = randint(-max_range1, max_range1)
        num2 = -num1
    else:
        num1 = randint(-max_range1, max_range1)
        num2 = randint(-max_range2, max_range2)

    return (num1, num2)

def GenerateFile(fileName, noTestCases):
    with open(fileName, 'w') as output:
        output.write(f"{noTestCases}\n")
        for _ in range(noTestCases):
            tuple = RandomInteger()
            output.write(f"{tuple[0]}\t{tuple[1]}\n")

if __name__ == "__main__":
    GenerateFile('./utils/Integer_Input.in', 100_000)