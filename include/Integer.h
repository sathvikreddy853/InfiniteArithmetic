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
    class Integer
    {
        private:

            std::vector<uint16_t> Array;
            bool isNegative;
    
        public:

            // constructors

            Integer();
            Integer(std::string);            
            Integer(const Integer &);

            // = operator
            Integer operator=(const Integer &);

            // used to `Print` the integer
            void Print();
            friend std::ostream &operator<< (std::ostream &, const Integer &);

            // static size_t RegisterSize(const Integer &, const Integer &);

            static void MatchDigits(Integer &, Integer &);

            Integer Complement() const;
            void PopZero();
            int16_t Compare(const Integer &);

            Integer Add(Integer);
            Integer Subtract(Integer);
            Integer Multiply(Integer);
            Integer Divide(Integer);
    };
}

#endif