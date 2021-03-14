# ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include <stddef.h>
#include <limits.h>

#ifndef BUFFER_SIZE
#   define BUFFER_SIZE 1
#endif

# define NL_1
# define _EOF 0
# define ERROR -1

typedef struct      s_list
{
    void    *content;
    struct s_list   *next;
}                   t_list;


int		ft_atoi(const char *str);
void    ft_bzero(void *s, size_t n);

# endif