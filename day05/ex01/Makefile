# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/22 11:19:43 by fmehdaou          #+#    #+#              #
#    Updated: 2021/09/23 17:33:09 by fmehdaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME			= Form

HEADERS			=   Bureaucrat.hpp \
					Form.hpp
					

SRCS			=   main.cpp  \
					Bureaucrat.cpp \
					Form.cpp
		  
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