
#include "Form.hpp"
#include "Bureaucrat.cpp"


Form::Form(void) : _name("no_name"), _is_signed(false), _grade_to_sign(1), _grade_to_exec(1);
{
	std::cout << "Form default constructor called" << std::endl;
}

Form::~Form(void){

	std::cout << "Form default destructor called" << std::endl;
}

Form::Form(std::string name, int grade_to_sign, int grade_to_exec) : _name(name), _grade_to_sign(grade_to_sign), _grade_to_exec(grade_to_exec), _is_signed(false){

	if (grade_to_sign < 1 || grade_to_exec < 1)
		throw GradeTooHighException();
	else if (grade_to_sign > 150 || grade_to_exec > 150)
		throw GradeTooLowException();
}

Form::Form(const Form &type){
	
	*this = type;
}


Form	&Form::operator=(const Form &type){

	this->_grade_to_sign = type.getGradeToSign();
	this->_grade_to_exec = type.getGradeToExec();
	this->_is_signed = type.getIsSigned();
	return (*this);
}

std::ostream	&operator<<(std::ostream &stream, const Form &form){
	
	stream << form.getName() << " form ";
	if (form.getIsSigned())
		stream << "is signed";
	else
		stream << "is not signed";
	stream << " : grade to sign = " << form.getGradeToSign() << " grade to exec = " << form.getGradeToExec();
	return stream;
}

std::string	Form::getName(void) const{

	return (this->_name);
}

int		Form::getGradeToSign(void) const{

	return this->_grade_to_sign;
}

int		Form::getGradeToExec(void) const{

	return this->_grade_to_exec;
}

bool		Form::getIsSigned(void) const{
	return this->_is_signed;
}
/*
void		Form::setName(std::string name){

	this->_name = name;
}


void		Form::setGrade(int grade){

	if (grade < 1)
		throw GradeTooLowException();
	else if (grade > 150)
		throw GradeTooHighException();
	else 
		this->_grade = grade;
}
*/

void		Form::beSigned(Bureaucrat &bureaucrat){
	
	if (bureaucrat.getGrade > this->getGradeToSign)
		throw GradeTooLowException();
	this->_is_signed = true;

}
