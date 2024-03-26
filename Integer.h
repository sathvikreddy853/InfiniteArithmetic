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

            std::vector<int> _Integer ;
            size_t _Size;
    
        public:

            Integer(std::string);            

            // used to `Print` the integer
            void Print();
            Integer Add(const Integer &);

    };
}

#endif