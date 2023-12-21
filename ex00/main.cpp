#include "easyfind.hpp"

int main()
{
    // vector test;
    std::vector<int> varr;
    varr.push_back(-1);
    varr.push_back(5);
    varr.push_back(7);
    varr.push_back(9);
    varr.push_back(15);
    std::cout << varr.at(0) << std::endl;
    try
    {
        std::cout << varr.at(varr.size()) << std::endl;
    }
    catch(std::exception& e)
    {
        std::cerr << "out of range\n";
    }
    try
    {
        std::cout << easyfind(varr, -1) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    // deque test;
    std::deque <int> darr;
    darr.push_back(-1);
    darr.push_back(5);
    darr.push_back(7);
    darr.push_front(3);
    try
    {
        std::cout << easyfind(darr, 3) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    // list test;
    std::list <int> larr;
    larr.push_back(-1);
    larr.push_back(5);
    larr.push_back(7);
    larr.push_front(3);
    try
    {
        std::cout << easyfind(larr, 5) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        std::cout << easyfind(larr, 0) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}