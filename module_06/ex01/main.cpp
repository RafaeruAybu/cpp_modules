#include <iostream>
#include <string>

typedef struct
{
    int num;
}       Data;

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

uintptr_t serialize(Data* ptr)
{
    uintptr_t uintptr_t_ptr = reinterpret_cast<uintptr_t>(ptr);
    
    return uintptr_t_ptr;
}

Data* deserialize(uintptr_t raw)
{
    Data* data_ptr = reinterpret_cast<Data *>(raw);
    return (data_ptr);
}

int main()
{
    //make data
    Data data;
    data.num = 42;
    //serialize
    uintptr_t a = serialize(&data);
    //deserialize
    Data* b = deserialize(a);
    //result
    std::cout
        << "Address of Data struct: " << &data << std::endl
        << "Original data's num: " << data.num << std::endl
        << "Address of a: " << &a << std::endl
        << "Address of b: " << b << std::endl
        << "Aum using b ptr is: " << b->num << std::endl;
    if (&data == b)
        std::cout << "Addresses are same, wich means data is not copyed!" << std::endl;
    else
        std::cout << "Addresses are different, wich means data is get copyed!" << std::endl;
   return 0;
}
