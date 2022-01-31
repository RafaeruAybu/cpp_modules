#include "Span.hpp"

Span::Span(unsigned int size)
{
    if (size < 2)
        throw "Too smol!";
    int_vector.reserve(size);
}

Span::Span(const Span &other)
{
    *this = other;
}

Span::~Span() {}

int Span::shortestSpan()
{
    //sort
    std::sort(int_vector.begin(), int_vector.end());
    //set first
    int shortestSpan = int_vector[1] - int_vector[0];
    //find if exist other shortest
    for (size_t i = 1; i < int_vector.size(); i++)
    {
        //return 0
        if (shortestSpan == 0)
            break;
        //if new set new one
        if (int_vector[i] - int_vector[i - 1] < shortestSpan)
            shortestSpan = int_vector[i] - int_vector[i - 1];
    }
    return shortestSpan;
}

//do sort and retun(n(max) - n(0))
int Span::longestSpan()
{
    std::sort(int_vector.begin(), int_vector.end());
    return (int_vector[int_vector.size() - 1] - int_vector[0]);
}

void Span::addNumber(int num)
{
    int_vector.push_back(num);
}

Span & Span::operator= (Span const &other)
{
    if (int_vector.empty())
        int_vector.clear();
    int_vector = std::vector<int>(other.int_vector.size());
    for (std::size_t i = 0; i < int_vector.size(); i++)
        int_vector[i] = other.int_vector[i];
    return *this;
}
