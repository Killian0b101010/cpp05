NAME = main 
SRC = Bureaucrat/Bureaucrat.cpp \
			AForm/AForm.cpp \
			PresidentialPardonForm/PresidentialPardonForm.cpp \
			RobotomyRequestForm/RobotomyRequestForm.cpp \
			ShrubberyCreationForm/ShrubberyCreationForm.cpp \
			main.cpp 

OBJ = $(SRC:.cpp=.o)
DEP = $(SRC:.cpp=.d)
FLAGS = -Wall -Wextra -Werror -g3 -std=c++98 -MMD -MP
RM = rm -rf
CC = c++

all : $(NAME)

$(NAME): $(OBJ)
				 $(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp
				$(CC) $(FLAGS) -c $< -o $@

clean: 
	$(RM) $(OBJ) $(DEP)

fclean: clean
	$(RM) $(NAME) 

re: fclean all 

-include $DEP

.PHONY : clean fclean 

