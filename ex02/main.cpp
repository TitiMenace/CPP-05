#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"


int	main()

{

	ShrubberyCreationForm	zazou("zazou");
	PresidentialPardonForm	papou("papou");
	RobotomyRequestForm		papah("papah");
	Bureaucrat				Patrick("Patrick", 1);

	Patrick.signForm(zazou);
	std::cout << zazou;
	Patrick.executeForm(zazou);
}
