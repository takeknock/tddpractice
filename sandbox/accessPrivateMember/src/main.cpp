#include <iostream>
//reference1 : https://gist.github.com/dabrahams/1528856
//reference2 : http://d.hatena.ne.jp/redboltz/20120111/1326292284

template <class Tag>
class Accessor {
public:
    static typename Tag::type value;
};

template <class Tag>
typename Tag::type Accessor<Tag>::value;

template <class Tag, typename Tag::type p>
class Initializer {
public:
    Initializer() 
    {
        Accessor<Tag>::value = p;
    }
    static Initializer instance;
};

template <class Tag, typename Tag::type p>
Initializer<Tag, p> Initializer<Tag, p>::instance;


class Data {
public:
    Data(int mem1, int mem2)
    : _mem1(mem1), _mem2(mem2)
    {}

    void print() const
    {
        std::cout << "mem1 = " << _mem1 << " mem2 = " << _mem2 << std::endl;
    }
private:
    int _mem1;
    int _mem2;
};

class Data_mem1 {
public:
    typedef int Data::* type;
};

class Data_mem2 {
public:
    typedef int Data::* type;
};

template class Initializer<Data_mem1, &Data::_mem1>;
template class Initializer<Data_mem2, &Data::_mem2>;

int main()
{
    Data a(1,2);
    a.print();
    std::cout << a.*Accessor<Data_mem1>::value << std::endl;
    std::cout << a.*Accessor<Data_mem2>::value << std::endl;
    a.*Accessor<Data_mem1>::value = 3;
    a.*Accessor<Data_mem2>::value = 4;
    a.print();

    return 0;
}   
