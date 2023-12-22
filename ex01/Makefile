NAME = phonebook
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp Contact.cpp Phonebook.cpp
OBJS = $(SRCS:c=o)

all: $(NAME)


$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

clean :
	rm -rf $(NAME)

fclean :
	rm -rf $(NAME)
re: clean all