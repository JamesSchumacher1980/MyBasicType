#ifndef MYBASIC_CPP_API_HPP
#define MYBASIC_CPP_API_HPP

namespace CppApi
{
    
    template <typename IntType> class TInteger
    {
    public:
        enum IntegerOperation : unsigned long
        {
            None = 0,
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
        
        inline TInteger(const TInteger<IntType> & valObj) : mv_Value(valObj.mv_Value)
        {
        }
        
        inline TInteger(const TInteger<IntType> & val1, const TInteger<IntType> & val2,
                        IntegerOperation enOpCode) : mv_Value()
        {
            mv_Value = IntegerMath(val1.mv_Value, val2.mv_Value, enOpCode);
        }
        
        inline ~TInteger()
        {
        }
        
        // Overloaded Operators
        inline TInteger<IntType> & operator = (IntType val)
        {
            mv_Value = val;
            
            return *this;
        }
        
        inline TInteger<IntType> & operator = (const TInteger<IntType> & valObj)
        {
            if (this != &valObj)
            {
                mv_Value = valObj.mv_Value;
            }
            
            return *this;
        }
        
        inline TInteger<Type> & operator += (const TInteger<IntType> & valObj)
        {
            if (this != &valObj)
            {
                mv_Value += valObj.mv_Value;
            }
            else
            {
                const unsigned long dwTemp = valObj.mv_Value;
                mv_Value += dwTemp;
            }
            
            return *this;
        }
        
        inline TInteger<IntType> operator + (const TInteger<IntType> & valObj) const
        {
            return TInteger<IntType>(mv_Value + valObj.mv_Value);
        }
        
        inline TInteger<IntType> & operator -= (const TInteger<IntType> & valObj)
        {
            if (this != &valObj)
            {
                mv_Value -= valObj.mv_Value;
            }
            
            return *this;
        }
    protected:
        // Member Variables
        IntType mv_Value;
        
        // Protected Member Functions
        
        // Obviously, the below function is intended
        // for being used as a general way to perform math
        // on 2 integer values and return the result in a manner
        // it would be easy to track your Operations
        // by storing your operands and opcodes in
        // in a data structure, which could be multiple
        // in a container/etc..
        
        inline IntType IntegerMath(IntType val1, IntType val2,
                                   IntegerOperation enOpCode)
        {
            IntType value();
            
            switch(enOpCode)
            {
            // put the shifts at the top
            case IntegerOperation::LeftShift:
                value = val1 << val2;
                break;
            case IntegerOperation::RightShift:
                value = val1 >> val2;
                break;
            case IntegerOperation::None:
                break;
            case IntegerOperation::Multiply:
                value = val1 * val2;
                break;
            case IntegerOperation::Divide:
                    
                if (val2 == 0)
                {
                    // throw a divide by zero
                    // exception
                }
                    
                value = val1 / val2;
                break;
                case IntegerOperation::Modulus:
                    
                    if (val2 == 0)
                    {
                        // should throw divide
                        // by zero exception,
                        // as modulus is remainder
                    }
                    
                value = val1 % val2;
                break;
            case IntegerOperation::Add:
                value = val1 + val2;
                break;
            case IntegerOperation::Subtract:
                value = va1 - val2;
                break;
            case IntegerOperation::AND:
                value = val1 & val2;
                break;
            case IntegerOperation::OR:
                value = val1 | val2;
                break;
            case IntegerOperation::XOR:
                value = val1 ^ val2;
                break;
            default:
                // should throw an exception here
                break;
            };
            
            return value;
        }
    };
}

#endif
