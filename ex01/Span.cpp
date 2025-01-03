#include "Span.hpp"

Span::Span(unsigned int N): N(N)
{

}


Span::~Span()
{

}


void Span::addNumber(int n)
{
    if (list.size() > N)
        throw std::out_of_range("")
}
