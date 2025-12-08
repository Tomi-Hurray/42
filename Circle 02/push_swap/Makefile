# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkorytko <tkorytko@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/07 15:58:30 by tkorytko          #+#    #+#              #
#    Updated: 2025/12/08 19:18:17 by tkorytko         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#compilator
CC = cc

#flags
CFLAGS = -Wall -Wextra -Werror

#lib name
NAME = push_swap

#source
SRC = push_swap.c , ft_atoi.c , input.c


#lib object files
OBJ = $(SRC:.c=.o)

#testfile
#TESTSRC = ft_printf.c
#TESTOBJ = $(TESTSRC:.c=.o)
#TESTBIN = test

#default rule
all : $(NAME) 

#building lib
$(NAME): $(OBJ)
	rm -f $(NAME)
	ar rcs $(NAME) $(OBJ)

#building files with .o ext
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

#test: $(NAME) $(TESTOBJ)
#	$(CC) $(CFLAGS) -o $(TESTBIN) $(TESTOBJ) $(NAME)
	
#cleanup of .o files
clean:
	rm -f $(OBJ) 
#cleanup of everyting + (library and programme)
fclean: clean
	rm -f $(NAME) 
#full cleanup and compilation
re: fclean all

.PHONY: all clean fclean re 