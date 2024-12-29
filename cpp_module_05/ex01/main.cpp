#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat ob("Bob", 55);
        Bureaucrat ob2;
        std::cout<<ob2;
        ob2 = ob;
        std::cout<<ob2;
        ob2.gradeIncrement();
        ob2.gradeIncrement();
        ob2.gradeIncrement();
        ob2.gradeIncrement();
        ob2.gradeIncrement();
        ob2.gradeIncrement();
        ob2.gradeIncrement();
        ob2.gradeIncrement();
        ob2.gradeIncrement();
        ob2.gradeIncrement();
        ob2.gradeIncrement();
        ob2.gradeIncrement();
        ob2.gradeDecrement();
        ob2.gradeDecrement();
        ob2.gradeDecrement();
        std::cout<<ob2;
        std::cout<<ob;
    }
    catch(Bureaucrat::GradeTooHighException &e)
    {
        std::cerr << e.what() << '\n';
    }
    catch(Bureaucrat::GradeTooLowException &e)
    {
        std::cerr << e.what() << '\n';
    }
}