# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/16 12:57:19 by fmehdaou          #+#    #+#              #
#    Updated: 2021/09/20 15:05:43 by fmehdaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME			= a.out

HEADERS 		=  AMateria.hpp \
				   Cure.hpp \
				   Ice.hpp \
				   Character.hpp \
				   ICharacter.hpp \
				   MateriaSource.hpp \
				   IMateriaSource.hpp 
					

SRCS			=   main.cpp \
					AMateria.cpp \
					Cure.cpp \
				    Ice.cpp \
					Character.cpp \
					MateriaSource.cpp

		  
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