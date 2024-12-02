#include "easyfind.hpp"

ValueNotFoundException::ValueNotFoundException() : std::exception() {}
char const *ValueNotFoundException::what() const throw()
{
    return "Value not found";
}

template <typename T>
typename T::iterator easyfind(T &container , int value)
{
    typename T::iterator it = std::find(container.begin(), container.end(), value);
    if(it == container.end())
        throw ValueNotFoundException();
    return it;
}