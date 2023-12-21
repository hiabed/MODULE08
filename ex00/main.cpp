#include "easyfind.hpp"

int main()
{
    std::vector <int> arr = {5, 2, 4, 1};
    try
    {
        easyfind(arr, 0);
    }
    catch (std::exception &e)
    {
        e.what();
    }
}