#include "Serializer.hpp"
#include <cstdint>

int main()
{
	Data *ob = new Data;
	ob->inch_vor_ban = "asenq te hello";
    uintptr_t ptr = Serializer::serialize(ob);
    Data *ob2 = Serializer::deserialize(ptr);
	std::cout<<ob2->inch_vor_ban<<std::endl;
	delete ob;
}
