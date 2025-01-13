#include "Base.hpp"

int main()
{
	B b;
	Base *base = b.generate();
	b.identify(base);
	Base &h = b;
	b.identify(h);
	delete(base);
}	