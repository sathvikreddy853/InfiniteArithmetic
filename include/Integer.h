// InfiniteArithmetic/Integer.h

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

            // = operator
            Integer &operator=(const Integer &);

            // used to `Print` the integer
            void Print();
            friend std::ostream &operator<< (std::ostream &, const Integer &);
            friend std::istream &operator>> (std::istream &, Integer &);

            static void MatchDigits(Integer &, Integer &);
            int16_t Compare(const Integer &);

            // takes the complement of the number with respect to 9
            Integer Complement() const;
            void VerifyString(std::string);

            void PopZero();
            bool isZero() const;

            static Integer parse(const std::string& s);

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
            Integer operator~();
    };
}


#endif