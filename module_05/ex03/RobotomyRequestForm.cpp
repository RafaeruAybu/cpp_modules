#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
    AForm("RobotomyRequestForm", target, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &orig) :
    AForm("RobotomyRequestForm", orig.getTarget(), 72, 45)
{
	*this = orig;
}

RobotomyRequestForm &RobotomyRequestForm::operator = (const RobotomyRequestForm &orig)
{
	this->setSigned(orig.getSigned());
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const
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
        int chance = std::rand() % 2;
        if (chance)
            std::cout << getTarget() << " has been robotomized successfully!" << std::endl;
        else
            std::cout << getTarget() << "'s robotomization failed." << std::endl;
    }
}
