#include "Span.hpp"

Span::Span(): N(0)
{

}

Span::Span(unsigned int N): N(N)
{

}

Span::Span(const Span& src)
{
	*this = src;
}

Span& Span::operator=(const Span& src)
{
    if (this == &src)
        return *this;
    N = src.N;
    list = src.list;
    return *this;
}

Span::~Span()
{

}

void Span::addNumber(int n)
{
    if (list.size() >= N)
        throw "List is full";
    else
        list.push_back(n);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if (list.size() + std::distance(begin, end) > N)
        throw "List is full";
    else
        list.insert(list.end(), begin, end);
}

int Span::longestSpan()
{
    if(list.size() <= 1)
        throw "List is empty or has only one element";
    std::vector<int> tmp;
    tmp = list;
    std::sort(tmp.begin(), tmp.end());
    return tmp.back() - tmp.front();
}

int Span::shortestSpan()
{
    if(list.size() <= 1)
        throw "List is empty or has only one element";
    std::vector<int> tmp;
    tmp = list;
    std::sort(tmp.begin(), tmp.end());
    int min = tmp[1] - tmp[0];
    for (size_t i = 1; i < tmp.size(); i++)
    {
        if (tmp[i] - tmp[i - 1] < min)
            min = tmp[i] - tmp[i - 1];
    }
    return min;
}

void Span::printList()
{
    for (std::vector<int>::iterator i = list.begin(); i != list.end(); i++)
    {
        std::cout << *i << " ";
    }
    std::cout << std::endl;
}
