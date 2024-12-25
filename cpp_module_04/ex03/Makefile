NAME =  Interface_recap

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

CPPS = main.cpp AMateria.cpp Ice.cpp Cure.cpp Character.cpp MateriaSource.cpp
#
HPPS = AMateria.hpp Ice.hpp Cure.hpp ICharacter.hpp IMateriaSource.hpp Character.hpp MateriaSource.hpp

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