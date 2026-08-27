#include "libft.h"

void *ft_memset(void *s, int c, size_t n){
    unsigned char *ptr;
    size_t i;
    i = 0;
    ptr =  (unsigned char *)s;

    while(i < n){
        ptr[i] = (unsigned char)c;
        i++;
    }
    return(s);


}



// int main(){

//     char buf[6] = "Hello";

// 	ft_memset(buf, 'A', 5);
// 	printf("%s\n", buf);

//     return 0;
// }