#include "Form.hpp"

class Form::GradeTooHighException : public std::exception
{
	public:
		const char *what() const throw()
        {
			return ("Grade Too High!");
		}
};

class Form::GradeTooLowException : public std::exception
{
	public:
		const char *what() const throw()
        {
			return ("Grade Too Low!");
		}
};

Form::Form(std::string name, int grade_to_sign, int grade_to_execute) :
    name(name), grade_to_sign(grade_to_sign), grade_to_execute(grade_to_execute)
{
    if (grade_to_sign < 1 || grade_to_execute < 1)
        throw GradeTooLowException();
    if (grade_to_sign > 150 || grade_to_execute > 150)
        throw GradeTooHighException();
}

Form::Form(const Form& other) :
    name(other.name), grade_to_sign(other.grade_to_sign)
    , grade_to_execute(other.grade_to_execute) {}


Form::~Form() {}

std::string Form::getName() const
{
    return name;
}

int Form::getGradeToSign() const
{
    return grade_to_sign;
}

int Form::getGradeToExecute() const
{
    return grade_to_execute;
}

void Form::beSigend(Bureaucrat& b)
{
    if (grade_to_sign >= b.getGrade())
        std::cout << b.getName() << " signs " << getName() << "." << std::endl;
    else
    {
        std::cout << b.getName() << " cannot  sign " << getName() << " because grade is too low!" << std::endl;
        throw GradeTooLowException();
    }
}
