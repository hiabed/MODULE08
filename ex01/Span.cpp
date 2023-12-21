#include "Span.hpp"

void Span::addNumber()
{
    _N++;
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