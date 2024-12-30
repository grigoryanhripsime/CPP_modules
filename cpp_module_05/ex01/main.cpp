#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat bureaucrat("John", 75);

    Form form("form1", 0, 100, 110);
    Form form1(form);
    bureaucrat.signForm(form);
    bureaucrat.signForm(form1);
}