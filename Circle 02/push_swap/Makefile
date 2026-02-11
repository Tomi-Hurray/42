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
CC = gcc

#flags
CFLAGS = -Wall -Wextra -Werror

#directories
PRINTF_DIR = ./ft_printf
PRINTF = $(PRINTF_DIR)/ft_printf.a
#linkers
LDFLAGS = -L $(PRINTF_DIR) -lft
# Wykrywanie systemu operacyjnego
ifeq ($(OS),Windows_NT)
    RM = del /f /q
    # Na Windowsie plik wykonywalny często ma końcówkę .exe
    TARGET = $(NAME).exe
else
    RM = rm -f
    TARGET = $(NAME)
endif

#lib name
NAME = push_swap

#source
SRC = push_swap.c \
	a_to_b.c b_to_a.c errors.c \
	ft_atol.c push_com.c reverse_r.c \
	rotate.c sort_stacks.c sort_three.c \
	split.c stack_init.c stack_utils.c \
	swap_com.c


#default rule
all : $(PRINTF) $(TARGET) 

#lib object files
OBJ = $(SRC:.c=.o)

#PRINTF:
$(PRINTF):
	$(MAKE) -C $(PRINTF_DIR)

#testfile
TESTSRC = push_swap.c
TESTOBJ = $(TESTSRC:.c=.o)
TESTBIN = test

#building lib
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(PRINTF) -o $(TARGET)

#building files with .o ext
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

test: $(NAME) $(TESTOBJ)
	$(CC) $(CFLAGS) -o $(TESTBIN) $(TESTOBJ) $(NAME)
	
#cleanup of .o files
clean:
	$(RM) $(OBJ)
	$(MAKE) -C $(PRINTF_DIR) clean

#cleanup of everyting + (library and programme)
fclean: clean
	$(RM) $(TARGET)
	$(MAKE) -C $(PRINTF_DIR) fclean
#full cleanup and compilation
re: fclean all

.PHONY: all clean fclean re 