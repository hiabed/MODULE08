# ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <deque>
# include <list>

template<typename T>

int easyfind(T &a, int n)
{
    typename T::iterator holder = find(a.begin(), a.end(), n);
    if (holder != a.end())
        return (*holder);
    throw std::runtime_error("Element not found");
}

# endif