NAME =  Form_up_maggots

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

CPPS = main.cpp Bureaucrat.cpp Form.cpp

HPPS = Bureaucrat.hpp Form.hpp

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