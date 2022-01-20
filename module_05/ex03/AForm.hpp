#ifndef EX00_AFORM_HPP
#define EX00_AFORM_HPP
#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
public:
    class	GradeTooHighException : public std::exception
    {
    public:
        const char *what() const throw();
	};
    class GradeTooLowException : public std::exception
    {
    public:
        const char *what() const throw();
    };
    class	NotSignedException : public std::exception
    {
	public:
		const char *what() const throw();
	};

    AForm(std::string name, std::string target, int grade_to_sign, int grade_to_execute);
    AForm(const AForm& other);
    virtual ~AForm();

    void setSigned(bool sign);

    std::string getName() const;
    std::string getTarget() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;
    bool getSigned() const;

    void beSigend(Bureaucrat& b);
    virtual void execute(const Bureaucrat& executor) const = 0;

    AForm & operator= (const AForm& other);
private:
    AForm();
    const std::string target;
    const std::string name;
    bool b_is_signed;
    const int grade_to_sign;
    const int grade_to_execute;
};

std::ostream & operator << (std::ostream& out, AForm const & current);

#endif
