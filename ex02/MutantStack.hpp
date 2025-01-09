#pragma once
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack() : std::stack<T>() {};
        ~MutantStack() {};
        MutantStack(const MutantStack &src) : std::stack<T>(src) { *this = src; };
        MutantStack &operator=(const MutantStack &src) { (void)src; return *this; };
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin() { return std::stack<T>::c.begin(); };
        iterator end() { return std::stack<T>::c.end(); };
};