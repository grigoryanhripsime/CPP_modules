#include <easyfind.hpp>

int main() {
    std::deque<int> v;
    for (int i = 0; i < 10; i++)
        v.push_back(i);

    std::deque<int>::iterator it = easyfind(v, 8);
    std::cout << it - v.begin()<<std::endl;

    try
    {
        it = easyfind(v, 10);
        std::cout << it - v.begin()<<std::endl;
    } catch (const std::exception &e)
    {
        std::cout << "Value not found\n";
    }
  
    return 0;
}