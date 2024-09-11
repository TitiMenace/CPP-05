

#pragma once

#include <string>
#include <iostream>
#include <exception>


class Bureaucrat;

class	ShrubberyCreationForm : public AForm{
		
	private:

		const std::string	_target;
		void	beExecuted(void);


	public:

		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm &type);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &type);

	};

std::ostream &operator<<(std::ostream &stream, const ShrubberyCreationForm &form);
