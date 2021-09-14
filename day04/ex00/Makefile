# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/14 12:44:46 by fmehdaou          #+#    #+#              #
#    Updated: 2021/09/14 16:01:04 by fmehdaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= Animal

SRCS			=   main.cpp  \
					Animal.cpp \
					Dog.cpp \
					WrongAnimal.cpp \
					WrongCat.cpp \
					Cat.cpp \

		  
OBJS			= $(SRCS:.cpp=.o)

FLAGS			= -Wall -Wextra -Werror 

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