#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct  s_list
{
    struct s_list   *next; //points to next element or NULL if last
    void            *data; //generic pointer
}                   t_list;

t_list  *ft_create_elem(void *data);

#endif