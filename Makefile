# ********************************************************************* #
#    Makefile								#
#                                                 		        #
#    Created: 2023/07/22 by alamizan          				#
#    Updated: 2023/11/08 10:59:37 by alamizan         			#
#                                                                       #
# ********************************************************************* #
NAME = manFr

SRC = main.cpp

FLAG = -Wall -Werror=extra -Wextra -Werror -g

OBJ = $(SRC:.cpp=.o)


RED		= \033[38;5;9m
YELLOW	= \033[38;5;76m
ORANGE	= \033[38;5;11m

%.o: %.cpp
	@c++ $(FLAG) -std=c++98 -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	@c++ $(FLAG) -std=c++98 $(OBJ) -o $(NAME) \
	| echo "$(ORANGE)XXXXXXXXXXXXXXXXXX\n\
	X manFr compiled X\n\
	XXXXXXXXXXXXXXXXXX"

clean:
	@rm -f $(OBJ) | echo "$(YELLOW)object files cleaned"

fclean: clean
	@rm -f $(NAME) | echo "$(RED)all clean"

re: fclean all

.PHONY : all clean fclean re