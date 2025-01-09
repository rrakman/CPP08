#include "Span.hpp"

int random_int_generator() {
    std::ifstream urandom("/dev/urandom", std::ios::in | std::ios::binary);
    int random_value;
    urandom.read(reinterpret_cast<char*>(&random_value), sizeof(random_value));
    random_value = random_value % 5000000;
    return random_value;
}

int main()
{   
    try
    {
        Span sp = Span(10000);
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::vector<int> v(1000);
        std::generate(v.begin(), v.end(), random_int_generator);
        sp.addNumber(v.begin(), v.end());
        // sp.printList();
        std::cout << "longest Span : " << sp.longestSpan() << std::endl;
        std::cout << "shortest Span : " << sp.shortestSpan() << std::endl;
    }
    catch (const char *e)
    {
        std::cerr << e << std::endl;
    }
    return 0;
}