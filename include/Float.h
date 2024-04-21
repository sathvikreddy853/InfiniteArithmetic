// IntegerArithmetic/Float.h

#pragma once
#ifndef FLOAT_H
#define FLOAT_H

// for testing
#define LOG(x) std::cout << x << std::endl

#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include "Integer.h"

namespace InfiniteArithmetic
{
    class Float
    {
        private:
        
            std::vector<uint16_t> Array;
            int64_t PointPosition;
            bool isNegative;
            static int64_t prec;

        public: 

            // constructors
            Float();
            Float(std::string);
            Float(const Float &);
            static Float parse(const std::string& s);

            ~Float();

            // assignment 
            Float &operator=(const Float &);
            void Assign(const Float &obj);

            bool isZero() const;
            Float &Negate() const;

            friend std::ostream &operator<< (std::ostream &, const Float &);
            friend std::istream &operator>> (std::istream &, Float &);

            int16_t Compare(const Float &);
            static void SetPrecision(int64_t precision=100);

            Float Add(Float);
            Float Subtract(Float);
            Float Multiply(Float);
            Float MultiplyByDigit(uint16_t);
            Float Divide(Float);
            Float Divide2(Float);

            Float operator+(const Float &);
            Float operator-(const Float &);
            Float operator*(const Float &);
            Float operator/(const Float &);
            Float operator-();
            Float operator+();

            bool operator>(const Float&);
            bool operator>=(const Float &);
            bool operator<(const Float&);
            bool operator<=(const Float &);
            bool operator==(const Float &);
            bool operator!=(const Float &);

        private:
        
            Float operator~();
            Float &Complement() const;

            void Print();
            void PopZero();
            void VerifyString(std::string);

            static void ResizeEnds(Float &, Float &);
            static void MatchDigits(Float &, Float &);
    };

}

#endif