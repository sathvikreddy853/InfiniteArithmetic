# Infinite Precision Arithmetic Library

This library is made to accomodate numbers of infinite length. 

It can perform all of the regular operations like add, subtract, multiply, divide and mod.

The library has been tested using python scripts which can be found in the utils/ folder

#### Using The Library

The library contains two header files - one for integers and the other for floating point numbers.

Simply include the files by using `#include "Integer.h"` or `#include "Float.h"` or both depending on your requirement.

### Cloning The Repository
```
git clone <replace-with-repository-name>
```

### Building The Executable 
To build the executable 
```
make all 
```

### Building A Library
You can build a library and link it to a C or C++ code that you are building.  
Build it using the following command
```
make inf-lib
```
Just include the header files in your project directory and link the library using the following command:

```
g++ <your-file-here>.cpp -llib-inf -o <executable>
```

## Integer
Here's a briefing of the utilities in `Integer.h`


#### Class Methods
| Functions | Purpose | 
| --------- | --------- |
| Assign | Used to assign the object to another value |
| Add | Adds two numbers together | 
| Subtract | Subtracts one number from the other | 
| Multiply | Multiplies two numbers | 
| Divide | Divides two numbers | 
| Mod | Returns the remainder |
| Complement | Takes the complement of given number | 
| MatchDigits | Matches the digits of two numbers such that they are equal |
| PopZero | Removes redundant zeroes from the number | 
| Print | Displays the number |
| isZero | Tells if the number is zero or not | 

#### Class Operators
| Operators | Purpose |
| --------- | ------- |
| operator<< | Used to display the number (output the number) |
| operator= | Used to assign the object to another value | 
| operator+ | Adds two numbers |
| operator– | Subtracts one number from the other |
| operator* | Multiplies two numbers |
| operator/ | Divides one number by the other |
| operator% | Takes the mod of one number w.r.t the other |
| operator~ | Takes the complement of the number | 

Note: All the operators have been defined in terms of the class methods


## Float
And here are the directions to use `Float.h`

#### Class Methods
| Functions | Purpose | 
| --------- | --------- |
| Assign | Used to assign the object to another value |
| Add | Adds two numbers together | 
| Subtract | Subtracts one number from the other | 
| Multiply | Multiplies two numbers | 
| Divide | Divides two numbers | 
| Mod | Returns the remainder |
| Complement | Takes the complement of given number | 
| MatchDigits | Matches the digits of two numbers such that they are equal |
| PopZero | Removes redundant zeroes from the number | 
| Print | Displays the number |
| isZero | Tells if the number is zero or not |
