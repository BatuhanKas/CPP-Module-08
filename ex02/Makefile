NAME = span

RM = rm -rf
CC = c++
CFLAGS = -g -Wall -Wextra -Werror -std=c++98 -pedantic

SRCS = main.cpp Span.cpp
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

v: f all
	valgrind ./$(NAME) --leak-check=full 

.PHONY: all clean fclean r re f c v
