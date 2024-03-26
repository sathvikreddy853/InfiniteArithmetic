// InfiniteArithmetic/Integer.h

#ifndef INTEGER_H
#define INTEGER_H

#define LOG(x) std::cout << x << std::endl

#include <iostream>
#include <string>
#include <vector>

namespace InfiniteArithmetic
{
    class Integer
    {
        private:

            std::vector<int> Array;
            size_t Size;
            bool isNegative;
    
        public:

            // constructors

            Integer();
            Integer(std::string);            
            Integer(const Integer &);

            // used to `Print` the integer
            void Print();
            friend std::ostream &operator<< (std::ostream &, const Integer &);

            // static size_t RegisterSize(const Integer &, const Integer &);

            Integer Complement();
            void PopZero();

            Integer Add(const Integer &);
            Integer Subtract(const Integer &);
            Integer Multiply(const Integer &);
            Integer Divide(const Integer &);
    };
}

#endif