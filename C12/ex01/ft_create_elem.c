#include <stdlib.h>
#include "ft_list.h"

t_list  *ft_create_elem(void *data)
{
    t_list  *elem; // store address of new node

    elem = malloc(sizeof(t_list));
    if(!elem)
        return (NULL);
    
    elem->data = data; //store given pointer in node
    elem->next = NULL; 

    return (elem);
}
