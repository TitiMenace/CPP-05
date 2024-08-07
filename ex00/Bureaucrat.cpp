#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(void) : _name("no_name"), _grade(1)
{
	std::cout << "Default constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat(void){

	std::cout << "Default destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name){

	if (grade < 1)
		throw GradeTooLowException();
	else if (grade > 150)
		throw GradeTooHighException();
	else 
		this->_grade = grade;

}

Bureaucrat::Bureaucrat(const Bureaucrat &type){
	
	*this = type
}


Bureaucrat	&Bureaucrat::operaror=(const Bureaucrat &type){

	this->_grade = type._grade;
	return (*this);
}

std::string	Bureaucrat::getName(void) const{

	return (this->_name);
}

int		Bureaucrat::getGrade(void) const{

	return this->_grade;
}


void		Bureaucrat::setName(std::string name){

	this->_name = name;
}

void		Bureaucrat::setGrade(int grade){

	if (grade < 1)
		throw GradeTooLowException();
	else if (grade > 150)
		throw GradeTooHighException();
	else 
		this->_grade = grade;
}

void		Bureaucrat::incrGrade(void){

	if (this->_grade + 1 > 150)
		throw GradeTooHighException();
	else 
		this->_grade++;
}

void		Bureaucrat::decrGrade(void){

	if (this->_grade - 1 < 1)
		throw GradeTooLowException();
	else 
		this->_grade--;
}
