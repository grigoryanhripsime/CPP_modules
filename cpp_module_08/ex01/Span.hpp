#pragma once

#include <set>
#include <vector>
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

        void addNumber(int num) const;
		template <typename T>
        void addNumber_range(T begin, T end) const;
        unsigned int longestSpan() const;
        unsigned int shortestSpan() const;
		void fill() const;

        void print() const;
};

template <typename T>
void Span::addNumber_range(T begin, T end) const
{
	while (begin != end)
	{
		this->addNumber(*begin);
		++begin;
	}
}