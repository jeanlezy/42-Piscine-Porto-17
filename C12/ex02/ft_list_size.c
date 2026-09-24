#include <stdlib.h>
#include "ft_list.h"

int ft_list_size(t_list *begin_list)
{
    int size;

    size = 0;
    while (begin_list)
    {
        // The first node counts
        size++;
        // Follow "next" pointer to move to next node
        // Change only local copy, not caller's list
        begin_list = begin_list -> next;
    }
    //if list empt, return zero
    return (size);
}

// JUST TO TEST LIST SIZE
void    ft_list_push_front(t_list **begin_list, void *data)
{
    t_list *new_node;

    new_node = malloc(sizeof(t_list));
    if(!new_node)
        return;
    new_node->data = data;           // store generic pointer inside "new_node"
    new_node->next = *begin_list;    // Link new node to the current 1o node
                                     // Is list empty copies NULL
    
    *begin_list = new_node;          // "new_node" node is the first (head)
}

#include <stdio.h>
int main(void)
{
    t_list *list = NULL;
    int a = 1;
    int b = 2;

    printf("%d\n", ft_list_size(list)); // 0

    ft_list_push_front(&list, &a);
    ft_list_push_front(&list, &b);

    printf("%d\n", ft_list_size(list)); // 2
}
