#ifndef whatever_HPP
# define whatever_HPP

#include <iostream>

template <typename T>
void swap(const T &a, const T &b)
{
    const T c = a;
    const_cast<T &>(a) = b;
    const_cast<T &>(b) = c;
}
template <typename T>
const T &min(const T &a, const T &b)
{
    if (a > b)
        return b;
    else
        return a;
}

template <typename T>
const T &max(const T &a, const T &b)
{
    if (a < b)
        return b;
    else
        return a;
}

#endif