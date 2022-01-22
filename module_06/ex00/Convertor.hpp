#ifndef EX00_CONVERTOR_HPP
#define EX00_CONVERTOR_HPP
#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>

class Convertor
{
public:
    Convertor(std::string& str);
    ~Convertor();

private:
    Convertor();
    void convert(std::string& str); 
    Convertor & operator= (const Convertor& other);
    Convertor(const Convertor& other);
    std::stringstream characters;
    std::stringstream integers;
    std::stringstream floats;
    std::stringstream doubles;
    char char_val;
    int int_val;
    float float_val;
    double double_val;
};

#endif
