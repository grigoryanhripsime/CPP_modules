NAME =  No_you_need_form_28B_not_28C

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

CPPS = main.cpp Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp

HPPS = Bureaucrat.hpp AForm.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp

OBJS = $(CPPS:.cpp=.o)

rm = rm -f

all: $(NAME)

$(NAME): $(OBJS) $(HPPS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp Makefile $(HPPS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: all clean fclean re