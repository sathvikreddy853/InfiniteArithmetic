// InfiniteArithmetic/Integer.h

#ifndef INTEGER_H
#define INTEGER_H

// for testing
#define LOG(x) std::cout << x << std::endl
#define HR LOG("------------------------------------------------------")

#include <iostream>
#include <string>
#include <vector>

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

            // static size_t RegisterSize(const Integer &, const Integer &);

            static void MatchDigits(Integer &, Integer &);
            int16_t Compare(const Integer &);

            // takes the complement of the number with respect to 9
            Integer Complement() const;

            void PopZero();
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

            Integer &operator+(Integer &);
            Integer operator-(Integer &);
            Integer operator*(Integer &);
            Integer operator/(Integer &);
            Integer operator%(Integer &);
            Integer operator-();
            Integer operator+();
            Integer operator~();
            // Integer operator>>(size_t);
            // Integer operator<<(size_t);
    };
}

#endif