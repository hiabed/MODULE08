#include "Span.hpp"

void Span::addNumber(int number)
{
    if(vArr.size() <= _N)
        vArr.push_back(number);
    else
        throw std::runtime_error("the vector is full\n");
    sort(vArr.begin(), vArr.end());
}

int Span::shortestSpan()
{
    return (vArr.at(1) - vArr.at(0));
}

int Span::longestSpan()
{
    return 0;
}

Span::Span()
{
    _N = 0;
}
Span::Span(unsigned int N)
{
    _N = N;
}
Span::Span(const Span &other)
{
    *this = other;
}
Span &Span::operator=(const Span &other)
{
    if (this != &other)
    {
        _N = other._N;
    }
    return *this;
}

Span::~Span()
{
}