// InfiniteArithmetic/Integer.h

/** @file Integer.h
 *  @brief Contains the 
 * 
 *  This contains the prototypes for the console
 *  driver and eventually any macros, constants,
 *  or global variables you will need.
 *
 *  @author Sathvik Reddy Bhavanam
 *  @bug No known bugs.
 */

#pragma once
#ifndef INTEGER_H
#define INTEGER_H

// for testing
#define LOG(x) std::cout << x << std::endl

#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>

namespace InfiniteArithmetic
{
    class Float;
    
    class Integer
    {
        private:

            friend Float;
            std::vector<uint16_t> Array;
            bool isNegative;
    
        public:

            // constructors
            Integer();
            Integer(std::string);            
            Integer(const Integer &);
            static Integer parse(const std::string& s);

            ~Integer();

            // = operator
            Integer &operator=(const Integer &);
            void Assign(const Integer &obj);

            // used to `Print` the integer
            friend std::ostream &operator<< (std::ostream &, const Integer &);
            friend std::istream &operator>> (std::istream &, Integer &);

            int16_t Compare(const Integer &);
            bool isZero() const;

            // operations
            Integer Add(Integer);
            Integer &Add2(Integer &);
            Integer Subtract(Integer);
            Integer Multiply(Integer);
            Integer MultiplyByDigit(uint16_t);
            Integer Divide(Integer);
            Integer Mod(Integer);

            Integer &Negate();

            Integer operator+(const Integer &);
            Integer operator-(const Integer &);
            Integer operator*(const Integer &);
            Integer operator/(const Integer &);
            Integer operator%(const Integer &);
            Integer operator-();
            Integer operator+();

            // comparison operators
            bool operator>(const Integer&);
            bool operator>=(const Integer &);
            bool operator<(const Integer&);
            bool operator<=(const Integer &);
            bool operator==(const Integer &);
            bool operator!=(const Integer &);

        private:
            // takes the complement of the number with respect to 9
            Integer Complement() const;
            Integer operator~();    

            void PopZero();
            void Print();

            void VerifyString(std::string);
            static void MatchDigits(Integer &, Integer &);
    };
}


#endif