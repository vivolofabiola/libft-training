#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *)){
    t_list *current = *lst;
    t_list *next_node;

    while(current != NULL){
        next_node = current->next;
        ft_lstdelone(current, del);
       current = next_node; 
    }
    *lst = NULL;

}