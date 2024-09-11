#include "Bureaucrat.hpp"
#include "AForm.hpp"


int	main()
{

	//--------------  TEST1  --------------------

	std::cout << "// TEST 1 //" << std::endl;

	try{
		AForm	form("AForm 1", 2, 3);
		std::cout << form << std::endl;
		Bureaucrat	bureaucrat("Michael Myers", 23);
		std::cout << bureaucrat << std::endl;
		bureaucrat.signForm(form);
		std::cout << form << std::endl;
	} catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;	
	
	//-------------  TEST 2  --------------------
	std::cout << "// TEST 2 //" << std::endl;
	try{
		AForm	form2("AForm 2", -1, 4);
		std::cout << form2 << std::endl;
		Bureaucrat	bureaucrat("Michael Myers", 2);
		std::cout << bureaucrat << std::endl;
		bureaucrat.signForm(form2);
		std::cout << form2 << std::endl;
	} catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		
		AForm	form3("AForm 3", 12313, 3);
		std::cout << form3 << std::endl;
	}catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;	
	
	//-------------  TEST 3  --------------------
	std::cout << "// TEST 3 //" << std::endl;
	try{
		AForm	form4("AForm 4", 4, -1);
		std::cout << form4 << std::endl;
		Bureaucrat	bureaucrat("Jason Krueger", 2);
		std::cout << bureaucrat << std::endl;
		bureaucrat.signForm(form4);
		std::cout << form4 << std::endl;
	} catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		
		AForm	form5("AForm 5", 1, 334232);
		std::cout << form5 << std::endl;
	}catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	//--------------  TEST4  --------------------
	std::cout << "// TEST 4 //" << std::endl;

	try{
		AForm	form("AForm", 10, 15);
		AForm	form1(form);
		std::cout << form << std::endl;
		std::cout << form1 << std::endl;
		Bureaucrat	bureaucrat("Jason Krueger", 5);
		std::cout << bureaucrat << std::endl;
		bureaucrat.signForm(form);
		std::cout << form << std::endl;
	} catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;	
	
	//--------------  TEST5  --------------------
	std::cout << "// TEST 5 //" << std::endl;

	try{
		AForm	form("AForm", 10, 15);
		std::cout << form << std::endl;
		Bureaucrat	bureaucrat1("Jason Krueger", 5);
		Bureaucrat	bureaucrat2("Ghostface", 5);
		std::cout << bureaucrat1 << std::endl;
		bureaucrat1.signForm(form);
		std::cout << form << std::endl;
		std::cout << bureaucrat2 << std::endl;
		bureaucrat2.signForm(form);
		std::cout << form << std::endl;
	} catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;	

	/*	try{
		Bureaucrat	Bureaucrat1("Zack", 1);
		std::cout << Bureaucrat1 << std::endl;
	} catch(std::exception &e){
		
		std::cout << e.what() << std::endl;
	}
	try{
		Bureaucrat	Bureaucrat2("Regis", 150);
		std::cout << Bureaucrat2 << std::endl;
	} catch(std::exception &e){
		
		std::cout << e.what() << std::endl;
	}
	try{
		Bureaucrat	Bureaucrat3("Lennon", 151);
		std::cout << Bureaucrat3 << std::endl;
	} catch(std::exception &e){
		
		std::cout << e.what() << std::endl;
	}
	try{
		Bureaucrat	Bureaucrat4("My man", -1);
		std::cout << Bureaucrat4 << std::endl;
	} catch(std::exception &e){
		
		std::cout << e.what() << std::endl;
	}
	try{
		Bureaucrat	Johnny("Johnny", 147);
		std::cout << Johnny << std::endl;
		Johnny.incrGrade();
		std::cout << Johnny << std::endl;
		Johnny.incrGrade();
		std::cout << Johnny << std::endl;
		Johnny.incrGrade();
		std::cout << Johnny << std::endl;
		Johnny.incrGrade();
		std::cout << Johnny << std::endl;
	} catch(std::exception &e){
		
		std::cout << e.what() << std::endl;
	}
	try{
		Bureaucrat	Sardou("Sardou", 4);
		std::cout << Sardou << std::endl;
		Sardou.decrGrade();
		std::cout << Sardou << std::endl;
		Sardou.decrGrade();
		std::cout << Sardou << std::endl;
		Sardou.decrGrade();
		std::cout << Sardou << std::endl;
		Sardou.decrGrade();
		std::cout << Sardou << std::endl;
	} catch(std::exception &e){
		
		std::cout << e.what() << std::endl;
	}*/
}
