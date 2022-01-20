#include "Bureaucrat.hpp"

class	Bureaucrat::GradeTooHighException : public std::exception
{
	public:
		const char *what() const throw()
        {
			return ("Grade Too High!");
		}
};

class	Bureaucrat::GradeTooLowException : public std::exception
{
	public:
		const char *what() const throw()
        {
			return ("Grade Too Low!");
		}
};

Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name)
    , grade(grade)
{
    if (grade < 1)
        throw GradeTooLowException();
    if (grade > 150)
        throw GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name)
    , grade(other.grade)
{
    if (grade < 1)
        throw GradeTooLowException();
    if (grade > 150)
        throw GradeTooHighException();
}

Bureaucrat::~Bureaucrat() {}

std::string Bureaucrat::getName() const 
{
    return name;
}

int Bureaucrat::getGrade() const
{
    return grade;
}

void Bureaucrat::upgrade()
{
    if ((grade - 1) < 1)
        throw GradeTooHighException();
    grade--;
}

void Bureaucrat::downgrade()
{
    if ((grade + 1) > 150)
        throw GradeTooLowException();
    grade++;
}

Bureaucrat & Bureaucrat::operator= (const Bureaucrat& other)
{
    if (this == &other)
        return *this;
    grade = other.grade;
    name = other.name;
    return *this;
}

std::ostream & operator << (std::ostream &out, Bureaucrat const & current)
{
	out << current.getName() << ", bureaucrat grade " << current.getGrade() << ".";
	return out;
}

