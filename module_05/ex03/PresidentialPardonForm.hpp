#ifndef EX02_PRESIDENTIALPARDONFORM_HPP
#define EX02_PRESIDENTIALPARDONFORM_HPP
#include <iostream>
#include <string>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
public:
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(const PresidentialPardonForm& other);
    ~PresidentialPardonForm();

    void execute(const Bureaucrat& executor) const;

    PresidentialPardonForm & operator= (const PresidentialPardonForm& other);
private:
    PresidentialPardonForm();
};

#endif
