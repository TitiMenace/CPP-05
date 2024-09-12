

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

		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm &type);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &type);
		std::string	getTarget(void);
	};

std::ostream &operator<<(std::ostream &stream, const ShrubberyCreationForm &form);
