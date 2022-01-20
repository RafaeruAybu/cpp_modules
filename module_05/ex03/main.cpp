#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
    Intern someRandomIntern;
	AForm* rrf;
	rrf = someRandomIntern.makeForm("Robotomy Request", "Bender");
    delete rrf;
	return 0;
}
