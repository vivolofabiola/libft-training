#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n){

    unsigned char *ptr_dst;
    unsigned char *ptr_src;
    size_t i = 0;

    ptr_dst = (unsigned char *)dst;
    ptr_src = (unsigned char *)src;

    while(i < n){
        ptr_dst[i] = ptr_src[i];
        i++;
    }

    return(dst);
}

// int main(void)
// {
// 	char src[] = "Hello World";
// 	char dst[20];

// 	ft_memcpy(dst, src, 6);
// 	dst[6] = '\0';
// 	printf("dst: %s\n", dst);
// 	return (0);
// }
