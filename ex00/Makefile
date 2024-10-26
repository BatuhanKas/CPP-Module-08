NAME = easyfind

RM = rm -rf
CC = c++
CFLAGS = -g -Wall -Wextra -Werror -std=c++98 -pedantic

SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(NAME).dSYM

re: fclean all

c: clean

r: re

f: fclean

.PHONY: all clean fclean r re f c
