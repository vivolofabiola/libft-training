#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len){

size_t copy_len;

if (start >= ft_strlen(s))
    {
    char *new_str = malloc(1);
    if (new_str == NULL)
        return (NULL);
    new_str[0] = '\0';
    return (new_str);
}

if (len < ft_strlen(s) - start)
    copy_len = len;
else
    copy_len = ft_strlen(s) - start;


char *substr = malloc(copy_len + 1);

if (substr == NULL)
    return (NULL);

ft_memcpy(substr, s + start, copy_len);

substr[copy_len] = '\0';

    return(substr);
}
