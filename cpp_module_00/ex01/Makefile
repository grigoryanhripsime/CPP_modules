NAME = phonebook

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

CPPS = Contact.cpp main.cpp PhoneBook.cpp

HPPS = Contact.hpp PhoneBook.hpp

OBJS = $(CPPS:.cpp=.o)

rm = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp Makefile $(HPPS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: all clean fclean re