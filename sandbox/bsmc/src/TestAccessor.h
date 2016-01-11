
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
