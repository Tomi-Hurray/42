# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkorytko <tkorytko@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/14 15:16:20 by tkorytko          #+#    #+#              #
#    Updated: 2025/10/14 19:19:25 by tkorytko         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#compilator
CC = cc

#flags
CFLAGS = -Wall -Wextra -Werror

#lib name
NAME = libft.a

#source
SRC = ft_isalnum.c ft_isalpha.c ft_isascii.c \
		ft_isdigit.c ft_isprint.c ft_memset.c \
		ft_strlen.c ft_bzero.c ft_memcpy.c \
		ft_memmove.c ft_strlcpy.c ft_strlcat.c \
		ft_toupper.c ft_tolower.c ft_strchr.c \
		ft_strrchr.c ft_strncmp.c ft_memchr.c \
		ft_memcmp.c ft_strnstr.c ft_atoi.c \
		ft_calloc.c ft_strdup.c \
		ft_substr.c ft_strjoin.c ft_strtrim.c  \
		ft_split.c ft_itoa.c ft_strmapi.c \
		ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
		ft_putendl_fd.c ft_putnbr_fd.c 

SRC_B = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
		ft_lstlast.c ft_lstadd_back.c
		
#lib object files
OBJ = $(SRC:.c=.o)

#make bonus
OBJ_B = $(SRC_B:.c=.o)

#default rule
all : $(NAME)

#building lib
$(NAME): $(OBJ)
	rm -f $(NAME)
	ar rcs $(NAME) $(OBJ)

#bonus
bonus: $(OBJ) $(OBJ_B)
	rm -f  $(NAME)
	ar rcs $(NAME) $(OBJ) $(OBJ_B)

#building files with .o ext
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

#cleanup of .o files
clean:
	rm -f $(OBJ) $(OBJ_B)
#cleanup of everyting + (library and programme)
fclean: clean
	rm -f $(NAME)
#full cleanup and compilation
re: fclean all

.PHONY: all clean fclean re bonus
