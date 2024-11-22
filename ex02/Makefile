NAME = base
CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Base.cpp

SRCH = A.hpp B.hpp C.hpp Base.hpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) $(SRCH)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean $(NAME)