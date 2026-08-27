#include <stdio.h>

 void *ft_memmove(void *dst, const void *src, size_t n){
    unsigned char *ptr_dst;
    unsigned char *ptr_src;
    size_t i = 0;
    ptr_dst = (unsigned char *)dst;
    ptr_src = (unsigned char *)src;

    if(dst < src){
        while(i < n){
            ptr_dst[i] = ptr_src[i];
            i++;
        }
    } else if (dst > src){
        i = n;
        while(i > 0){
            i--;
            ptr_dst[i] = ptr_src[i];
        }
    } else{
        while(i < n){
        ptr_dst[i] = ptr_src[i];
        i++;}
    }
    return(dst);
}
    

// int main(void)
// {
// 	char buf[8] = "ABCDEFG";

// 	printf("Before: %s\n", buf);
// 	ft_memmove(buf + 2, buf, 5);
// 	printf("After:  %s\n", buf);
// 	return (0);
// }