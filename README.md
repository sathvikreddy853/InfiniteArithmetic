<!-- /README.md -->

# Infinite Precision Arithmetic Library

This library is made to accomodate numbers of infinite length. 

It can perform all of the regular operations like add, subtract, multiply, divide and mod.

The library has been tested using python scripts which can be found in the utils/ folder

### Using The Library
The library contains two header files - one for integers and the other for floating point numbers.

Simply include the files by using `#include "Integer.h"` or `#include "Float.h"` or both depending on your requirement.

### Cloning The Repository
```shell
git clone <replace-with-repository-name>
```

### Building The Executable 
To build the executable 
```shell
make all 
```

### Building The Library
You can build a library and link it to a C or C++ code that you are building.  
Build it using the following command
```shell
make libmy_inf_arith
```
### Linking The Library
Just include the header files in your project directory and link the library using the following command:
```shell
g++ <your-file-here>.cpp -o <executable> -std=c++17 -I include/ -L. -llibmy_inf_arith
```

## Integer
Here's a briefing of the utilities in `Integer.h`


#### Class Methods

Note : The functions marked with @ are private functions.

|  <div style="width:150px">Functions</div> | <div style="width:400px">Purpose</div> | 
| --------- | --------- |
| Assign | Used to assign the object to another value |
| Add | Adds two numbers together | 
| Subtract | Subtracts one number from the other | 
| Multiply | Multiplies two numbers | 
| Divide | Divides two numbers | 
| Mod | Returns the remainder |
| Negate | Negates the number |
| isZero | Tells if the number is zero or not | 
| parse | Returns an instance of the Integer class | 
| @Complement | Takes the complement of given number | 
| @MatchDigits | Matches the digits of two numbers such that they are equal |
| @PopZero | Removes redundant zeroes from the number | 
| @Print | Displays the number |


#### Class Operators

Note : The operators marked with @ are private.

|  <div style="width:150px">Operators</div> | <div style="width:400px">Purpose</div> | 
| --------- | ------- |
| operator<< | Used to display the number (output the number) |
| operator>> | Used to take the number from input stream |
| operator= | Used to assign the object to another value | 
| operator+ | Adds two numbers |
| operator– | Subtracts one number from the other |
| operator* | Multiplies two numbers |
| operator/ | Divides one number by the other |
| operator% | Takes the mod of one number w.r.t the other |
| operator+ | Returns the same number | 
| operator- | Negates the number | 
| @operator~ | Takes the complement of the number | 

Note: All the operators have been defined in terms of the class methods


## Float
And here are the directions to use `Float.h`

#### Class Methods

Note : The functions marked with @ are private functions.

|  <div style="width:150px">Functions</div> | <div style="width:400px">Purpose</div> | 
| --------- | --------- |
| Assign | Used to assign the object to another value |
| Add | Adds two numbers together | 
| Subtract | Subtracts one number from the other | 
| Multiply | Multiplies two numbers | 
| Divide | Divides two numbers | 
| Negate | Negates the number |
| isZero | Tells if the number is zero or not |
| parse | Returns an instance of the Float class | 
| @Complement | Takes the complement of given number | 
| @MatchDigits | Matches the digits of two numbers such that they are equal |
| @PopZero | Removes redundant zeroes from the number | 
| @Print | Displays the number |

#### Class Operators

Note : The operators marked with @ are private.

|  <div style="width:150px">Operators</div> | <div style="width:400px">Purpose</div>  | 
| --------- | ------- |
| operator<< | Used to display the number (output the number) |
| operator>> | Used to take the number from input stream |
| operator= | Used to assign the object to another value | 
| operator+ | Adds two numbers |
| operator– | Subtracts one number from the other |
| operator* | Multiplies two numbers |
| operator/ | Divides one number by the other |
| operator+ | Returns the same number | 
| operator- | Negates the number | 
| @operator~ | Takes the complement of the number | 

Note: All the operators have been defined in terms of the class methods