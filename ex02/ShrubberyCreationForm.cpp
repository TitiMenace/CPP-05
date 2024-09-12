

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(void) : _target("Unspecified")
{
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target){

	this->_target = target;

	std::ofstream	NewFile(target.c_str());

	NewFile << "             .        +          .      .          .\n\
     .            _        .                    .\n\
  ,              /;-._,-.____        ,-----.__\n\
 ((        .    (_:#::_.:::. `-._   /:, /-._, `._,\n\
  `                 \\   _|`\"=:_::.`.);  \\ __/ /\n\
                      ,    `./  \\:. `.   )==-'  .\n\
    .      ., ,-=-.  ,\\, +#./`   \\:.  / /           .\n\
.           \\/:/`-' , ,\\ '` ` `   ): , /_  -o\n\
       .    /:+- - + +- : :- + + -:'  /(o-) \\)     .\n\
  .      ,=':  \\    ` `/` ' , , ,:' `'--\".--\"---._/`7\n\
   `.   (    \\: \\,-._` ` + '\\, ,\"   _,--._,---\":.__/\n\
              \\:  `  X` _| _,\\/'   .-'\n\
.               \":._:`\\____  /:'  /      .           .\n\
                    \\::.  :\\/:'  /              +\n\
   .                 `.:.  /:'  }      .\n\
           .           ):_(:;   \\           .\n\
                      /:. _/ ,  |\n\
                   . (|::.     ,`                  .\n\
     .                |::.    {\\  \n\
                      |::.\\  \\ `.\n\
                      |:::(\\    |\n\
              O       |:::/{ }  |                  (o\n\
               )  ___/#\\::`/ (O \"==._____   O, (O  /`\n\
          ~~~w/w~\"~~,\\` `:/,-(~`\"~~~~~~~~\"~o~\\~/~w|/~\n\
dew   ~~~~~~~~~~~~~~~~~~~~~~~\\\\W~~~~~~~~~~~~\\|/~~ " << std::endl;


	NewFile.close();
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &type){
	
	*this = type;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void){

//	std::cout << "ShrubberyCreationForm default destructor called" << std::endl;
}

std::string	ShrubberyCreationForm::getTarget(void){
	return (this->_target);
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &type){

	this->_target = type.getIsSigned();
	return (*this);
}
