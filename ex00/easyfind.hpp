#pragma once

#include <algorithm>
#include <iostream>
#include <vector>

#define GREEN   "\033[32m"
#define RED     "\033[31m"
#define NORMAL  "\033[0m"

template <typename T>
typename T::iterator easyfind(T &container, int value);

#include "easyfind.tpp"
