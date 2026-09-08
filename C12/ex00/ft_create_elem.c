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

/* #include <stdio.h>
int main(void)
{
    int value;
    t_list *node;

    value = 42;
    node = ft_create_elem(&value);
    if(!node)
    {
        printf("error creating element\n");
        return (1);
    }
    printf("Data stored: %d\n", *(int *)node->data);
    printf("Next: %p\n", (void *)node->next);

    free(node);
    return (0);
} */