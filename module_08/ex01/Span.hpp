#ifndef EX01_SPAN_HPP
#define EX01_SPAN_HPP
#include <vector>
#include <algorithm>
#include <iostream>

class Span
{
public:
    Span(unsigned int size);
    Span(const Span &other);
    ~Span();
    
    void addNumber(int num);
    int shortestSpan();
    int longestSpan();

    Span & operator= (Span const &other);
private:
    Span();
    std::vector<int> int_vector;
};

#endif
nput iterator category (class )
output_iterator_tag
