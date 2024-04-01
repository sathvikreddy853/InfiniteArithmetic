// IntegerArithmetic/Float.h

#ifndef FLOAT_H
#define FLOAT_H

// for testing
#define LOG(x) std::cout << x << std::endl
#define HR LOG("------------------------------------------------------")

#include <iostream>
#include <string>
#include <vector>

namespace InfiniteArithmetic
{
    class Float
    {
        private:
        
            std::vector<uint16_t> Array;
            size_t PointPosition;
            bool isNegative;

        public: 

            // constructors

            Float();
            Float(std::string);
            Float(const Float &);

            Float operator=(const Float &);

            void Print();
            friend std::ostream operator<< (std::ostream &, const Float &);

            Float Add(const Float &);
    };

}

#endif