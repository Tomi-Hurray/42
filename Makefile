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

#lib object files
OBJ = $(SRC:.c=.o)

#testfile
TESTSRC = test_file.c
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
