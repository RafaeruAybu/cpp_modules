#ifndef EX00_BUREAUCRAT_HPP
#define EX00_BUREAUCRAT_HPP
#include <string>
#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
public:
    class GradeTooHighException;
    class GradeTooLowException;

    Bureaucrat(const std::string& name, int grade);
    Bureaucrat(const Bureaucrat& other);
    ~Bureaucrat();

    std::string getName() const;
    int getGrade() const;

    void upgrade();
    void downgrade();

    void signForm(Form& form);

    Bureaucrat & operator= (const Bureaucrat& other);
private:
    Bureaucrat();
    std::string name;
    int grade;          //from 1 (highest) to 150 (lowest)
};

std::ostream & operator << (std::ostream& out, Bureaucrat const & current);

#endif
