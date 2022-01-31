#ifndef EX02_MUTANTSTACK_HPP
#define EX02_MUTANTSTACK_HPP
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::iterator reverse_iterator;
    typedef typename std::stack<T>::container_type::iterator const_iterator;
    typedef typename std::stack<T>::container_type::iterator const_reverse_iterator;

    iterator begin()
    {
        return c.begin();
    }

    reverse_iterator end()
    {
        return c.end();
    }

    const_iterator rbegin()
    {
        return c.rbegin();
    }

    const_reverse_iterator end()
    {
        return c.cend();
    }
private:

};

#endif
