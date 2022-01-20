#ifndef EX03_INTERN_HPP
#define EX03_INTERN_HPP
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
public:
    Intern();
    Intern(const Intern& other);
    ~Intern();

    AForm * makeForm(std::string form, std::string target);

    Intern & operator= (const Intern& other);
private:
    typedef AForm * (Intern::*fncptr)(std::string const& type) const;
    static const fncptr f_pointer_array[3];
    static const std::string types[3];
    AForm * shubbery(std::string const& type) const;
    AForm * robotomy(std::string const& type) const;
    AForm * presidential(std::string const& type) const;
};

#endif
