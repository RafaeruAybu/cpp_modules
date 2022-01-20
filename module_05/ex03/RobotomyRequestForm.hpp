#ifndef EX02_ROBOTOMYREQUSTFORM_HPP
#define EX02_ROBOTOMYREQUSTFORM_HPP
#include <iostream>
#include <string>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
public:
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(const RobotomyRequestForm& other);
    ~RobotomyRequestForm();

    void execute(const Bureaucrat& executor) const;

    RobotomyRequestForm & operator= (const RobotomyRequestForm& other);
private:
    RobotomyRequestForm();
};

#endif
