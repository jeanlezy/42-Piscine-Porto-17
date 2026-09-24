#include <stdlib.h>
#include "ft_list.h"

// Add a new node at the beginning of the list
// double pointer to change where list starts
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

// Print every value of the list, followed by NULL
void print_list(t_list *lst)
{
    int i = 0;
    while(lst != NULL)
    {
        // data is void *, so cast to int * them dereference it
        printf("%d -> ", *(int *)lst->data);
        lst = lst->next; // move to next node
        i++;
    }
    printf("NULL\n");
}

#include <stdio.h>
int main(void)
{
    t_list *list = NULL;
    
    int a = 1;
    int b = 2;
    int c = 3;

    ft_list_push_front(&list, &a);
    printf("After 'a' insertion: ");
    print_list(list);

    ft_list_push_front(&list, &b);
    printf("After 'b' insertion: ");
    print_list(list);
    
    ft_list_push_front(&list, &c);
    printf("After 'c' insertion: ");
    print_list(list);

    return (0);
}