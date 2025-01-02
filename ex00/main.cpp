#include "easyfind.hpp"

int main()
{
    std::vector<int> v;
    srand(time(NULL));
    for(int i = 0; i < 10; i++)
    {
        v.push_back(rand() % 13);
    }
    for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout<< std::endl;
    try
    {
        std::vector <int>::iterator it = easyfind(v, 5);
        std::cout<< GREEN << "Value found: " << *it << NORMAL <<std::endl;
    }
    catch(const char *e)
    {
        std::cout<< RED <<e<< NORMAL <<std::endl;
    }
    return 0;
}