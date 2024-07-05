

class	Bureaucrat{
		
	public:

		Bureaucrat(void);
		~Bureaucrat(void);i
		Bureaucrat(std::string name, int grade)
		Bureaucrat(const Bureaucrat type);
		Bureaucrat &operator=(const Bureaucrat &type);

	private:

		const	_name;
		int		_grade;
}
