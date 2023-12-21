#ifndef SPAN_HPP
#define SPAN_HPP

class Span
{
private:
    unsigned int _N;
public:
    // member functions;
    void addNumber();
    // orthodox canolical form;
    Span();
    Span(unsigned int N);
    Span(const Span &other);
    Span &operator=(const Span &other);
    ~Span();
};

#endif