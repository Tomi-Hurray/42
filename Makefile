#compilator
CC = gcc

#flags
CFLAGS = -Wall -Wextra -Werror

#lib name
NAME = libft.a

#source
SRC = ft_is.c

#lib object files
OBJ = $(SRC:.c=.o)

#testfile
TESTSRC = testfile.c
TESTOBJ = $(TESTSRC:.c=.o)
TESTBIN = test

#default rule
all : $(NAME) test

#building lib
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

#building files with .o ext
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
#building testfile
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
