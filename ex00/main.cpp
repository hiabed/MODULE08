#include "easyfind.hpp"

int main()
{
    std::vector <int> arr;
    arr.push_back(-1);
    arr.push_back(5);
    arr.push_back(7);
    arr.push_back(3);
    try
    {
        std::cout << easyfind(arr, -1) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
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