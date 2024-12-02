#pragma once

#include <algorithm>
#include <iostream>
#include <vector>

class ValueNotFoundException : public std::exception
{
    public:
        ValueNotFoundException();
        virtual const char *what() const throw();
};

template <typename T>
typename T::iterator easyfind(T &container, int value);

#include "easyfind.tpp"
