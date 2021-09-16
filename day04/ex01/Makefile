# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/14 12:44:46 by fmehdaou          #+#    #+#              #
#    Updated: 2021/09/16 11:12:37 by fmehdaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= Animal

HEADERS 		= Animal.hpp \
					Dog.hpp \
					Cat.hpp \
					Brain.hpp

SRCS			=   main.cpp  \
					Animal.cpp \
					Dog.cpp \
					Cat.cpp \
					Brain.cpp

		  
OBJS			= $(SRCS:.cpp=.o)

FLAGS			= -Wall -Wextra -Werror 

RM				= rm -rf 

%.o : %.cpp $(HEADERS)
	clang++ ${FLAGS} -o $@ -c $<

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