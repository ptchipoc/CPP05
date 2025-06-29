#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat a;
    Bureaucrat b("Pedro", 1);
    std::cout << b.getGrade() << std::endl;
}