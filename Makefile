OBJET_NAME = $(SRC_NAME:.c=.o)
CC = gcc
EXE = fillit
LIBRARY = libfillit.a
MAIN = main.o
CFLAGS = -Werror -Wextra -Werror 
SRC_NAME = ft_memset.c ft_strlen.c ft_putstr.c ft_free.c ft_shorten_ttms.c ft_spec_tetrimos.c ft_begin_lst.c ft_put_nl.c ft_back2.c ft_read.c ft_check_block.c ft_check_tetrimos.c ft_array.c ft_place_tetrimos2.c ft_check2.c ft_extend_ttms.c ft_test.c ft_all.c ft_check_last_block.c

all : $(EXE)

$(EXE) : $(LIBRARY) $(MAIN)
		gcc  $(CFLAGS) $(MAIN) $(LIBRARY) -o $(EXE)

$(LIBRARY) : $(OBJET_NAME)
	ar -r $(LIBRARY) $(OBJET_NAME)

$(MAIN) : main.c
	$(CC) $(CFLAGS) -c $<

%.o : %.c
	$(CC) -c $(CFLAGS) $<

clean :
	rm -rf $(SRC_NAME:.c=.o) main.o

fclean : clean
	rm -rf $(LIBRARY) $(EXE)

re : fclean all
