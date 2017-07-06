#ifndef MYBASIC_CPP_API_HPP
#define MYBASIC_CPP_API_HPP

namespace CppApi
{
    template <typename IntType> class TInteger
    {
    public:
        inline TInteger() : mv_Value()
        {
        }
        
        inline TInteger(IntType val) : mv_Value(val)
        {
        }
        
        inline TInteger(const TInteger & valObj) : mv_Value(valObj.mv_Value)
        {
        }
    protected:
        IntType mv_Value;
    };
}

#endif
