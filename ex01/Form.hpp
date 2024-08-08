
#pragma once

#include <string>
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"


class	Form{
		
	public:

		class	GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return("Error: GradeTooHigh: Grade is in between 1 and 150 included !");
				}
		};

		class	GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return("Error: GradeTooLow: Grade is in between 1 and 150 included !");
				}
		};
		
		Form(void);
		~Form(void);
		Form(std::string name, int gradeToSign, int gradeToExec);
		Form(const Form &type);
		Form &operator=(const Form &type);

		std::string 	getName(void) const;
		int		getGradeToSign(void) const;
		int		getGradeToExec(void) const;
		bool		getIsSigned(void) const;

		void		beSigned(Bureaucrat &bureaucrat);


	//	void		setName(std::string name);
	//	void		setGrade(int grade);



	private:

		const std::string	_name;
		bool			_is_signed;
		const	int		_grade_to_sign;
		const	int		_grade_to_exec;
};

std::ostream &operator<<(std::ostream &stream, const Form &form);
