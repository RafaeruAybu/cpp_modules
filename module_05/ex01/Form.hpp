#ifndef EX00_FORM_HPP
#define EX00_FORM_HPP
#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
public:
    class GradeTooHighException;
    class GradeTooLowException;

    Form(std::string name, int grade_to_sign, int grade_to_execute);
    Form(const Form& other);
    ~Form();

    std::string getName() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;

    void beSigend(Bureaucrat& b);


    Form & operator= (const Form& other);
private:
    Form();
    const std::string name;
    bool b_is_signed;
    const int grade_to_sign;
    const int grade_to_execute;
};

std::ostream & operator << (std::ostream& out, Form const & current);

#endif
