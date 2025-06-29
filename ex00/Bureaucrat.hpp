#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
	private:
			const std::string		name;
			int									grade;
	public:
			Bureaucrat();
			Bureaucrat(std::string name, int grade);
			Bureaucrat(const Bureaucrat& copy);
			Bureaucrat& operator=(const Bureaucrat& copy);
			~Bureaucrat();

			std::string	getName();
			int		getGrade();
};

#endif