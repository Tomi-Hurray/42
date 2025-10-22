# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tomi <tomi@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/18 00:56:20 by tomi              #+#    #+#              #
#    Updated: 2025/10/22 00:28:49 by tomi             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#compilator
CC = cc

#flags
CFLAGS = -Wall -Wextra -Werror

#lib name
NAME = libftprintf.a

#source
SRC = ft_printf.c print_format.c printf_char.c \
		printf_digit.c printf_digitup.c printf_str.c \
		printf_udigit.c printf_void.c printf_udigit_pointer.c \


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