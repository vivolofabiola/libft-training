#include "libft.h"

char *ft_strdup(const char *s1){
    int i = 0;

    char *new_str = malloc(ft_strlen(s1) + 1);

    if (new_str == NULL){
        return (NULL);
    }

  
    while(s1[i] != '\0'){
        new_str[i] = s1[i];
        i++;
    }

    new_str[i] = '\0';

    return (new_str);

}