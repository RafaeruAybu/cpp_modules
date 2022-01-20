#ifndef EX02_SHRUBBERYCREATIONFORM_HPP
#define EX02_SHRUBBERYCREATIONFORM_HPP
#include <string>
#include <iostream>
#include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
public:
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm& other);
    ~ShrubberyCreationForm();
    
    
    void execute(const Bureaucrat& executor) const;

    ShrubberyCreationForm & operator= (const ShrubberyCreationForm& other);
private:
    ShrubberyCreationForm();
};

#endif
