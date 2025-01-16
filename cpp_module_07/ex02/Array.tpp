#include "Array.hpp"

template <typename T>
Array<T>::Array()
{
    std::cout<<"Array default ctor called!\n";
    this->arr = new T[];
}

template <typename T>
Array<T>::Array(unsigned int n)
{
    std::cout<<"Array ctor with params called!\n";
    this->n = n;
    this->arr = new T[n];
}

template <typename T>
Array<T>::Array(const Array &other)
{
    std::cout<<"Array copy ctor called!\n";
    this->arr = new T[other.size()];
    this->n = other.size();
    for (unsigned int i = 0; i < other.size(); i++)
        this->arr[i] = other[i];
}
template <typename T>
Array<T> &Array<T>::operator=(const Array &other)
{
    if (this == &other)
        return *this;
    std::cout<<"Array copy assignment operator called!\n";
    delete[] this->arr;    
    this->n = other.size();
    this->arr = new T[other.size()];
    for (unsigned int i = 0; i < other.size(); i++)
        this->arr[i] = other[i];
    return *this;
}

template <typename T>
unsigned int Array<T>::size() const
{
    return this->n;
}
template <typename T>
T &Array<T>::operator[](int idx) const
{
    return arr[idx];
}

template <typename T>
Array<T>::~Array()
{
    delete[] this->arr;
}
