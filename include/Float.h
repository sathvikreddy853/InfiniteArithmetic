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

            Float &operator=(const Float &);

            static void MatchDigits(Float &, Float &);

            bool isZero() const;

            Float &Complement() const;
            Float &Negate() const;

            void Print();
            friend std::ostream &operator<< (std::ostream &, const Float &);

            int16_t Compare(const Float &);

            Float Add(Float);
            // Float &Add2(Float &);        // placeholder

            Float Subtract(Float);
            Float Multiply(Float);
            Float MultiplyByDigit(uint16_t);
            Float Divide(Float);


            Float operator+(Float &);
            Float operator-(Float &);
            Float operator*(Float &);
            Float operator/(Float &);
            Float operator-();
            Float operator+();
            Float operator~();
    };

}

#endif