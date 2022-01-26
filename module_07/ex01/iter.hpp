#ifndef EX01_ITER_HPP
#define EX01_ITER_HPP
#include <cstddef>

template <typename T>
void iter(T *arr, size_t length, void (*f)(T &elm))
{
    for (size_t i = 0; i < length; i++)
        f(arr[i]);
}

//for test purpouse
template<typename T>
void swap_first_and_second_words(T& str)
{
    char tmp;
    if (str.length() < 2)
        return ;
    tmp = str[0];
    str[0] = str[1];
    str[1] = tmp;
}

#endif
