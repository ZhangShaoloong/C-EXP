#ifndef __COMPLEX__
#define __COMPLEX__

template<typename T>
class complex
{
public:
    complex(T x = 0,T i = 0):re(0),im(0)
    {

    }
    
    complex& operator +=(const complex&);

    T real() const {return re;}  // const 关键字用于不会改变内部数据的函数
    T imag() const

private:
    T re,im;
};
#endif

class A // Singleton
{
    public:
    static A& GetInstance();

    private:
    A();

A& A ::GetInstance()
{
    static A& a;
    return a;

}


};