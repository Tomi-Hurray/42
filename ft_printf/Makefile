# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tomi <tomi@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/18 00:56:20 by tomi              #+#    #+#              #
#    Updated: 2025/10/18 02:07:36 by tomi             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#compilator
CC = cc

#flags
CFLAGS = -Wall -Wextra -Werror

#lib name
NAME = libftprintf.a

#source
SRC = ft_printf.c ft_strlen.c ft_putchar_fd.c\
		ft_putnbr_fd.c ft_putstr_fd.c \


#lib object files
OBJ = $(SRC:.c=.o)

#testfile
TESTSRC = ft_printf.c
TESTOBJ = $(TESTSRC:.c=.o)
TESTBIN = test

#default rule
all : $(NAME) test

#building lib
$(NAME): $(OBJ)
	rm -f $(NAME)
	ar rcs $(NAME) $(OBJ)

#building files with .o ext
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

test: $(NAME) $(TESTOBJ)
	$(CC) $(CFLAGS) -o $(TESTBIN) $(TESTOBJ) $(NAME)
	
#cleanup of .o files
clean:
	rm -f $(OBJ) $(TESTOBJ)
#cleanup of everyting + (library and programme)
fclean: clean
	rm -f $(NAME) $(TESTBIN)
#full cleanup and compilation
re: fclean all

.PHONY: all clean fclean re test 