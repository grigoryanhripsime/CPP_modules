NAME = Iter

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address

CPPS = main.cpp 

HPPS = iter.hpp

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