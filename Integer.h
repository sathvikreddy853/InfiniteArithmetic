// InfiniteArithmetic/Integer.h

#ifndef INTEGER_H
#define INTEGER_H

#define LOG(x) std::cout << x << std::endl

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

namespace InfiniteArithmetic
{
    class Integer
    {
        private:

            std::vector<int> _Integer ;
            size_t _Size;
            bool _isNegative;
    
        public:

            // constructors

            Integer();
            Integer(std::string);            

            // used to `Print` the integer
            void Print();
            friend std::ostream &operator<< (std::ostream &, const Integer &);

            Integer Complement();

            Integer Add(const Integer &);
            Integer Subtract(const Integer &);
            Integer Multiply(const Integer &);
            Integer Divide(const Integer &);
    };
}

#endif