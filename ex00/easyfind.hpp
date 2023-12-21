# ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>

template<typename T>

T &easyfind(T &a, int n)
{
    T holder = find(a.begin(), a.end(), n);
    if (holder != a.end())
        return (holder);
    throw std::runtime_error("Element not found");
}

# endif