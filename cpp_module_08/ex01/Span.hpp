#pragma once

#include <set>
#include <iostream>
#include <stdexcept>

class Span
{
    private:
        unsigned int N;
        std::multiset<int> arr;
    public:
        Span(unsigned int N);

        //Orthodox
        Span();
        Span(const Span &other);
        Span &operator=(const Span &other);
        ~Span();

        void addNumber(int num);
        unsigned int longestSpan();
        unsigned int shortestSpan();

        void print();
};