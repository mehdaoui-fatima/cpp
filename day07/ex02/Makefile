# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/04 13:30:37 by fmehdaou          #+#    #+#              #
#    Updated: 2021/10/04 14:31:22 by fmehdaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= Array

HEADERS			=  Array.hpp 
					
SRCS			=  main.cpp  
		  
OBJS			= $(SRCS:.cpp=.o)

FLAGS			= -Wall -Wextra -Werror 

RM				= rm -rf 

%.o : %.cpp $(HEADERS)
	@clang++ ${FLAGS} -o $@ -c $<

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