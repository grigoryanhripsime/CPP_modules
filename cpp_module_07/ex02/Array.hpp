#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
    private:
        T *arr;
        unsigned int n;
    public:
        Array();
        Array(unsigned int n);
        Array(const Array &other);
        Array &operator=(const Array &other);
        unsigned int size() const;
        T &operator[](int idx) const;
        ~Array();
};

#include "Array.tpp"

#endif