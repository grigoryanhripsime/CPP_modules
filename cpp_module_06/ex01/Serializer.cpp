#include "Serializer.hpp"

Serializer::Serializer()
{
    std::cout<<"Serializer default ctor called!\n";
}
Serializer::Serializer(const Serializer &other)
{
    std::cout<<"Serializer copy ctor called!\n";
    *this = other;
}

Serializer &Serializer::operator=(const Serializer &other)
{
    if (this == &other)
        return *this;
    std::cout<<"Serializer copy assignment operator called!\n";
    return *this;
}

Serializer::~Serializer()
{
    std::cout<<"Serializer dtor called!\n";
}

uintptr_t Serializer::serialize(Data* ptr)
{
	std::cout<<"Data * to unitptr_t cast called!\n";
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw)
{
	std::cout<<"unitptr_t to Data * cast called!\n";
    return reinterpret_cast<Data *>(raw);
}

