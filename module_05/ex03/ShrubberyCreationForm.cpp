#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
    AForm("ShrubberyCreationForm", target, 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& orig) :
    AForm("ShrubberyCreationForm", orig.getTarget(), 145, 137)
{
    *this = orig;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm &ShrubberyCreationForm::operator = (const ShrubberyCreationForm &orig)
{
	this->setSigned(orig.getSigned());
	return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const
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
        std::string filename = getTarget() + "_shrubbery";
        std::ofstream file(filename);
        file
        << "        . ....            " << std::endl
        << "       \\ /. . \\           " << std::endl
        << "     \\ . \\ . /            " << std::endl
        << "       \\  | | /           " << std::endl
        << "         \\ | /            " << std::endl
        << "           |/             " << std::endl
        << "           |              " << std::endl
        << "           |              " << std::endl;
        file.close();
    }
}
