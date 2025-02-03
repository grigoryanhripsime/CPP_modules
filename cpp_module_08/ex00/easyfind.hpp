#pragma once

template <typename T>
typename T::iterator easyfind(T &arr, int val)
{
    typename T::iterator it = arr.begin();
    while (it != arr.end())
    {
        if (*it == val)
            return it;
        ++it;
    }
    throw std::exception();
}

