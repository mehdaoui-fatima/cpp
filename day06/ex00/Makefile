# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/29 09:53:16 by fmehdaou          #+#    #+#              #
#    Updated: 2021/09/29 10:51:08 by fmehdaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME			= convert

HEADERS			=  Convert.hpp
					
SRCS			=   main.cpp  \
					Convert.cpp
					
		  
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