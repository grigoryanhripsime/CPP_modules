#include <Span.hpp>

Span::Span(unsigned int N)
{
    this->N = N;
    std::cout<<"Span ctor w/param called!\n";
}

Span::Span()
{
    this->N = 10;
    std::cout<<"Span default ctor with N = 10 called!\n";
}

Span::Span(const Span &other)
{
    this->N = other.N;
    std::multiset<int>::iterator it = other.arr.begin();
    while (it != other.arr.end())
    {
        this->arr.insert(*it);
        ++it;
    }
    std::cout<<"Span copy ctor called!\n";
}

Span &Span::operator=(const Span &other)
{
    if (this == &other)
        return *this;
    this->N = other.N;
    this->arr.clear();
    std::multiset<int>::iterator it = other.arr.begin();
    while (it != other.arr.end())
    {
        this->arr.insert(*it);
        ++it;
    }
    std::cout<<"Span copy assigment operator called!\n";
    return *this;
}

Span::~Span()
{
    std::cout<<"Span dtor called!\n";
}

void Span::addNumber(int num)
{
    if (this->arr.size() == this->N)
    {
        std::cout<<N << " "<<this->arr.size()<<std::endl;
        throw std::out_of_range("Out of N");
    }
    this->arr.insert(num);
}

void Span::print()
{
    std::multiset<int>::iterator it = this->arr.begin();
    while (it != this->arr.end())
    {
        std::cout<<*it<<" ";
        ++it;
    }
    std::cout<<"\n";
}

unsigned int Span::longestSpan()
{
    if (this->arr.size() < 2)
        throw std::runtime_error("Not enough numbers for span");
    return *(--(this->arr.end())) - *(this->arr.begin());
}

unsigned int Span::shortestSpan()
{
    if (this->arr.size() < 2)
        throw std::runtime_error("Not enough numbers for span");
    unsigned int res = *(++this->arr.begin()) - *(this->arr.begin());
    unsigned int tmp_res;
    std::multiset<int>::iterator prev;
    std::multiset<int>::iterator it = this->arr.begin()++;
    while (it != --(this->arr.end()))
    {
        prev = it;
        tmp_res = *(++it) - *prev;
        if (tmp_res < res)
            res = tmp_res;
    }
    return res;
}

