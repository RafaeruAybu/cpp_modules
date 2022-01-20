#include "Intern.hpp"

const Intern::fncptr Intern::f_pointer_array[3] = { &Intern::shubbery, &Intern::robotomy, &Intern::presidential };

const std::string	Intern::types[3] = { "Shrubbery Creation", "Robotomy Request", "Presidential Pardon" };

Intern::Intern() {}

Intern::Intern(const Intern &other)
{
	*this = other;
}

Intern::~Intern() {}

AForm * Intern::shubbery(std::string const &target) const
{
	AForm *ptr = new ShrubberyCreationForm(target);
	return ptr;
}

AForm * Intern::robotomy(std::string const &target) const
{
	AForm *ptr = new PresidentialPardonForm(target);
	return ptr;
}

AForm * Intern::presidential(std::string const &target) const
{
	AForm *ptr = new RobotomyRequestForm(target);
	return ptr;
}

AForm * Intern::makeForm(std::string form, std::string target)
{
	AForm	*ptr = NULL;
	for (size_t i = 0; i < sizeof(types) / sizeof(types[1]); i++)
	{
		if (types[i] == form)
			ptr = (this->*f_pointer_array[i])(target);
	}
	if (!ptr)
		std::cout << "Intern coudn't create " << form << " because of wrong form type" << std::endl;
	else
		std::cout << "Intern creates " << form << " form targeted on " << target << std::endl;
	return ptr;
}

Intern &Intern::operator = (const Intern &)
{
	return *this;
}
