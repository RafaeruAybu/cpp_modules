#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
    AForm("PresidentialPardonForm", target, 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &orig) :
    AForm("PresidentialPardonForm", orig.getTarget(), 25, 5)
{
	*this = orig;
}

PresidentialPardonForm &PresidentialPardonForm::operator = (const PresidentialPardonForm &orig)
{
	this->setSigned(orig.getSigned());
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
    if (getSigned() == false)
    {
        std::cout << "Form is not signed!!!" << std::endl;
        throw NotSignedException();
    }
    else if (executor.getGrade() < getGradeToExecute())
    {
        std::cout << "Grade to execute is too low!" << std::endl;
        throw GradeTooLowException();
    }
    else
    {
        std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
    }
}
