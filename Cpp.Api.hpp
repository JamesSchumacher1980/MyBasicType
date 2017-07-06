#ifndef MYBASIC_CPP_API_HPP
#define MYBASIC_CPP_API_HPP

namespace CppApi
{
    
    template <typename IntType> class TInteger
    {
    public:
        enum IntegerOperation : unsigned long
        {
            Multiply = 1,
            Divide = 2,
            Modulus = 3,
            Add = 4,
            Subtract = 5,
            AND = 6,
            OR = 7,
            XOR = 8,
            LeftShift = 9,
            RightShift = 10
        }
        
        inline TInteger() : mv_Value()
        {
        }
        
        inline TInteger(IntType val) : mv_Value(val)
        {
        }
        
        inline TInteger(const TInteger & valObj) : mv_Value(valObj.mv_Value)
        {
        }
        
        inline TInteger(const TInteger & val1, const TInteger & val2,
                        IntegerOperation enOpCode)
        {
            
        }
    protected:
        IntType mv_Value;
    };
}

#endif
