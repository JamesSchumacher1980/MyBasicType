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
        };
        
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
                        IntegerOperation enOpCode) : mv_Value()
        {
            mv_Value = IntegerMath(val1.mv_Value, val2.mv_Value, enOpCode);
        }
    protected:
        // Member Variables
        IntType mv_Value;
        
        // Protected Member Functions
        inline IntType IntegerMath(IntType val1, IntType val2,
                                   IntegerOperation enOpCode)
        {
            IntType value();
            
            switch(enOpCode)
            {
            case IntegerOperation::Multiply:
                value = val1 * val2;
                break;
            case IntegerOperation::Divide:
                value = val1 / val2;
                break;
            }
        }
    };
}

#endif
