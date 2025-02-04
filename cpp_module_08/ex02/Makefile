NAME =  Mutated_abomination

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address

CPPS = main.cpp

HPPS = MutantStack.hpp MutantStack.tpp

OBJS = $(CPPS:.cpp=.o)

rm = rm -f

all: $(NAME)

$(NAME): $(OBJS) $(HPPS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp Makefile $(HPPS)
	$(CC) $(CFLAGS) -c $< -o $@ -I.

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: all clean fclean re