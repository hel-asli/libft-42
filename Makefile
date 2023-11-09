NAME = libft.a

all : libft.h
	gcc -c ft_*.c
	ar rcs libft.a ft_*.o
clean:
	rm ft_*.o

fclean: clean
	rm libft.a
re: fclean all
