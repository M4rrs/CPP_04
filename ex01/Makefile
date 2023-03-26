NAME = AnimalBrain
CC = c++
FLAGS = -Wall -Werror -Wextra -I -std=c++98 -fsanitize=address

RM = rm -rf

SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp #WrongAnimal.cpp WrongCat.cpp
INC = Animal.hpp Cat.hpp Dog.hpp Brain.hpp #WrongAnimal.hpp WrongCat.hpp

OBJS = ${SRCS:%.cpp=%.o}

%.o: %.cpp ${INC}
	@printf "\033[38;5;121mCompiling $<...\033[0m\r"
	@${CC} ${FLAGS} -c $< -o $@

all: ${NAME}

${NAME}: ${OBJS}
	@echo "\n\033[38;5;204mAnimals with brains!\033[0m"
	@${CC} ${FLAGS} ${OBJS} -o $@

clean:
	@echo "\033[38;5;227mRemoving objects\033[0m"
	@${RM} ${OBJS}

fclean:	clean
	@echo "\033[38;5;81mRemoving Executable\033[0m"
	@${RM} ${NAME}

re: fclean all