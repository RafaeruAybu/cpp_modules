#include "AForm.hpp"

const char *AForm::GradeTooHighException::what() const throw()
{
        return ("Grade Too High!");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Grade Too Low!");
}

const char *AForm::NotSignedException::what() const throw()
{
	return ("Not Signed!");
}

AForm::AForm(std::string name, std::string target, int grade_to_sign, int grade_to_execute) :
    name(name), grade_to_sign(grade_to_sign), grade_to_execute(grade_to_execute)
    , target(target)
{
    if (grade_to_sign < 1 || grade_to_execute < 1)
        throw GradeTooLowException();
    if (grade_to_sign > 150 || grade_to_execute > 150)
        throw GradeTooHighException();
}

AForm::AForm(const AForm& other) :
    name(other.name), grade_to_sign(other.grade_to_sign)
    , grade_to_execute(other.grade_to_execute), target(other.target) {}


AForm::~AForm() {}

void AForm::setSigned(bool sign)
{
    b_is_signed = sign;
}

std::string AForm::getName() const
{
    return name;
}

std::string AForm::getTarget() const
{
    return target;
}

int AForm::getGradeToSign() const
{
    return grade_to_sign;
}

int AForm::getGradeToExecute() const
{
    return grade_to_execute;
}

bool AForm::getSigned() const
{
    return b_is_signed;
}

void AForm::beSigend(Bureaucrat& b)
{
    if (grade_to_sign >= b.getGrade())
    {
        b_is_signed = true;
        std::cout << b.getName() << " signs " << getName() << "." << std::endl;
    }
    else
    {
        std::cout << b.getName() << " cannot  sign " << getName() << " because grade is too low!" << std::endl;
        throw GradeTooLowException();
    }
}

std::ostream & operator<< (std::ostream& out, const AForm & current)
{
    out << "Form: " << current.getName() << ", is signed: " << current.getSigned()
        <<  ", grade to execute: " << current.getGradeToExecute()
        << ", grade to sign: " << current.getGradeToSign() << ", target: "
        << current.getTarget() << std::endl;
    return out;
}
