

#pragma once

#include "AForm.hpp"
#include <string>
#include <iostream>
#include <exception>
#include <fstream>


class Bureaucrat;

class	ShrubberyCreationForm : public AForm{
		
	private:

		std::string	_target;
		void	beExecuted(void);


	public:

		class	FileNotOpenException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm &type);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &type);
		std::string	getTarget(void);
		void	execute(Bureaucrat const &executor) const;

			};

std::ostream &operator<<(std::ostream &stream, const ShrubberyCreationForm &form);
