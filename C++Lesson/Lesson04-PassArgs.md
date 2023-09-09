构造函数private(私有化)
不容许被外界创建对象

double real() const {};
忘记const，可能会误导某些编译器,导致访问不到数据

参数传递 pass by value 和 pass by reference（&）(to const)

pass by value 是整包数据传递，double 是四个字节
尽量不pass value ，pass Value过大

pass by reference(to const) 参数传引用类似于传指针 效率更高速度更快

参数传递尽量都传引用,在可以的情况下

friend （友元）可以直接访问私有数据
friend complex& __doapl(complex* ths, const complex)
{
    ths->re;
}
同一个class的各个objects互为友元










