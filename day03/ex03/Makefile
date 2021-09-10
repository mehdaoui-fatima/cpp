# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/09 11:25:15 by fmehdaou          #+#    #+#              #
#    Updated: 2021/09/10 17:24:49 by fmehdaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME			= DiamondTrap

SRCS			=   main.cpp  \
					ScavTrap.cpp \
					ClapTrap.cpp \
					FragTrap.cpp \
					DiamondTrap.cpp
					
						  
OBJS			= $(SRCS:.cpp=.o)

FLAGS			= -Wall -Wextra -Werror -Wshadow -Wno-shadow

RM				= rm -rf 

.PHONY: clean bonus fclean all re

all:			$(NAME)

$(NAME):		$(OBJS)
				@clang++ ${FLAGS} ${OBJS} -o ${NAME}

clean:
				@$(RM) $(OBJS)

fclean:			clean
				@$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re