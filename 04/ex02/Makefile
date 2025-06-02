NAME = ex02

SRCS = src/main.cpp src/Animal.cpp src/Dog.cpp src/Cat.cpp src/WrongAnimal.cpp src/WrongCat.cpp src/Brain.cpp

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

MAKEFLAGS += --no-print-directory

MSG1 = @echo "42@compile ✔️\nCompiled and now is working! 🚂💨"
MSG2 = @echo "42@cleaned ✔️\nWe cleaned the floor and now there's no .o files! 🧹"

all: $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)
	$(MSG1)

clean:
	@rm -f $(NAME)

fclean: clean
	@rm -f $(NAME)
	$(MSG2)

re: fclean all

.PHONY: all re clean fclean
