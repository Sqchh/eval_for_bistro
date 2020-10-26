/*
** EPITECH PROJECT, 2020
** eval_expr
** File description:
** funct needed for eval
*/

#ifndef EVAL
#define EVAL
int first_para(char const *src, int end);
int next_para(char const *src);
int is_sign(char c);
int index_d1(int i, char const *src);
int index_d2(int i, char const *src);


void do_mdm(char *src, int diff);
void do_as(char *src, int diff);

int do_op(char **src);

char **get_op(char const *src, int i, char *res[4]);
void replace_op(long res_op, int i, char *src);

void my_initialise(char const *src, char *dest);
int eval_expr(char const *src);
#endif
