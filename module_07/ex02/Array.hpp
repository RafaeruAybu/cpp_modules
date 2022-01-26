#ifndef EX00_ARRAY_HPP
#define EX00_ARRAY_HPP

template<typename T>
class Array
{
public:
    class OutOfRangeException : public std::exception
    {
        virtual const char * what() const throw();
    };

    Array();
    Array(std::size_t n);
    Array(Array<T> const &other);
    virtual ~Array();

    std::size_t size(void) const;

    Array & operator= (Array const &other);
    T &operator[](std::size_t index);
    T const & operator[](std::size_t index) const;
private:
    std::size_t m_size;
    T *m_ptr;
};

template<typename T>
const char* Array<T>::OutOfRangeException::what() const throw()
{
	return "Out of range!";
}

template<typename T>
Array<T>::Array() : m_size(0), m_ptr(nullptr) {}

template<typename T>
Array<T>::Array(std::size_t n) : m_size(n), m_ptr(nullptr)
{
    m_ptr = new T[n]();
}

template<typename T>
Array<T>::Array(Array<T> const &other) :
    m_size(0), m_ptr(nullptr)
{
    if (other.m_size > 0)
    {
        m_ptr = new T[other.m_size]();
        for (size_t i = 0; i < other.m_size; i++)
            m_ptr[i] = other.m_ptr[i];
    }
    m_size = other.m_size;
}

template<typename T>
Array<T>::~Array()
{
	if (m_size > 0)
		delete[] m_ptr;
}

template<typename T>
Array<T> &Array<T>::operator=(Array<T> const &other)
{
	if (m_size > 0)
		delete[] m_ptr;
	m_ptr = nullptr;
	if (other.m_size > 0)
	{
		m_ptr = new T[other.m_size]();
		for (size_t i = 0; i < other.m_size; i++)
			m_ptr[i] = other.m_ptr[i];
	}
	m_size = other.m_size;
	return *this;
}

template<typename T>
T &Array<T>::operator[](std::size_t index)
{
	if (index >= m_size)
		throw Array::OutOfRangeException();
	return m_ptr[index];
}

template<typename T>
T const &Array<T>::operator[](std::size_t index) const
{
	return (operator[](index));
}

template<typename T>
std::size_t Array<T>::size(void) const
{
	return m_size;
}

#endif
