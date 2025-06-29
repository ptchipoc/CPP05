#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("default"), grade(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name (name), grade(grade)
{
    std::cout << "Parametizade contructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& copy)
{
    if (this != &copy)
    {
        grade = copy.grade;
    }
    std::cout << "Assignment operator called" << std::endl;
    return (*this);
}

std::string    Bureaucrat::getName()
{
    return (this->name);
}

int Bureaucrat::getGrade()
{
    return (this->grade);
}