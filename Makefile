##
## EPITECH PROJECT, 2020
## makefile
## File description:
## makes comp
##

SRC =$(wildcard *.c)

TSRC =	tests/test_evalexpress.c \
				do_op.c 								 \
				find_ds.c								 \
				evalexpress.c						 \
				find_para.c							 \
				operator_finder.c

SRCOS =$(wildcard lib/my/*.o)

CC =gcc

AR =ar rc

CFLAGS =-W -Wall

TFLAGS =-lcriterion -fprofile-arcs -ftest-coverage

NAME =eval_expr

all: $(NAME)

$(NAME):
	@make -C lib/my
	@$(CC) $(SRC) $(CFLAGS) -Llib/my/ -lmy -Iinclude/ -o $(NAME)

clean:
	@rm -f $(NAME)

fclean:
	@rm lib/my/libmy.a $(SRCOS)

re: clean all

test:
	$(CC) $(TSRC) $(CFLAGS) -Llib/my/ -lmy -Iinclude/ $(TFLAGS) -o $(NAME)
	@	./$(NAME)
	@gcov $(SRC)
	@lcov -c --directory . --output-file coverage.info
	@genhtml coverage.info --output-directory output
	@rm -f coverage.info
	@rm -f  *.gcno *.gcda *.c.gcda *.c.gcov

testclean:
	@rm -r output $(NAME)
