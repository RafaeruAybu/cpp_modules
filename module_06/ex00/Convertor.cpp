#include "Convertor.hpp"

Convertor::Convertor(std::string& str) :
    characters(""), integers(""), floats(""), doubles("")
{
    convert(str);
}

Convertor::Convertor(const Convertor& other) {}

Convertor::~Convertor() {}

void Convertor::convert(std::string& str)
{
    double source;
    try                     //if stod works it is number or nan
    {
        source = std::stod(str);
        //try char
        if (static_cast<int>(source) > 32 && static_cast<int>(source) <= 126)   //if char from double
        {                                                                       //  is printeble
            characters << '\'';
            characters << static_cast<char>(source);
            characters << '\'';
        }
        else    //if char from double is non printable
            characters << "Non diplayable";
        //convert to other types
        if (static_cast<int>(source) >= INT32_MAX ||static_cast<int>(source) <= INT32_MIN)
		    integers << "impossible";
	    else
		    integers << static_cast<int>(source);
        floats << static_cast<float>(source) << 'f';
        doubles << source;
    }
    catch (std::exception)  //if stod fails it means that it is char
    {
        integers << "impossible";
        floats << "impossible";
        doubles << "impossible";
        if (str.length() == 1 && std::isprint(str[0])) //one char
        {
            if (static_cast<int>(str[0]) > 32 && static_cast<int>(str[0]) <= 126)
            {
                characters << '\'';
                characters << str[0];
                characters << '\'';
            }
            else //Non displayable
                characters << "Non diplayable";
        }
        else //several chars
            characters << "impossible";
    }
    //output to std::cout
    std::cout
        << "char: " << characters.str() << std::endl
        << "int: " << integers.str() << std::endl
        << "float: " << floats.str() << std::endl
        << "double: " << doubles.str() << std::endl;
}
