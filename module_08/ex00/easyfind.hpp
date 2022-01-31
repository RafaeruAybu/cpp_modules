#ifndef EX00_EASYFIND_HPP
#define EX00_EASYFIND_HPP

#include <iterator>
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T &container, int search)
{
    return(std::find(container.begin(), container.end(), search));
}


#endif //EX00_EASYFIND_HPP
