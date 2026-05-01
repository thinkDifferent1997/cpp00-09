# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/25 17:40:42 by elsikira          #+#    #+#              #
#    Updated: 2026/04/25 17:55:34 by elsikira         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = Iter
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

OBJ_DIR = objs/
SRC = main.cpp
OBJ = $(SRC:%.cpp=$(OBJ_DIR)%.o)
DEP = $(OBJ:.o=.d)


YELLOW = \033[0;33m
GREEN = \033[0;32m

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)%.o: %.cpp
	@mkdir -p $(@D)
	@printf "$(YELLOW)Compiling files... $<$(RESET)\n"
	@$(CXX) $(CXXFLAGS) -c $< -o $@

-include $(DEP)

clean:
	@$(RM) $(OBJ_DIR)
	@printf "$(GREEN)Objects removed.$(RESET)\n"

fclean: clean
	$(RM) $(NAME)
	@printf "$(GREEN)Executable removed.$(RESET)\n"

re: fclean all

.PHONY: all clean fclean re
