#include "Serializer.hpp"
#include <cstdint>

int main()
{
    Data *ob = new Data;
    unintptr_t ptr = Serializer::serialize(ob);
    Data *ob2 = Serializer::deserialize(ptr);
}