#include <stdio.h>


void ft_bzero(void *s, size_t n){
    unsigned char *ptr;
    ptr = (unsigned char *)s;
    size_t i = 0;

    while(i < n){
        ptr[i] = 0;
        i++;
    }
}
    


// int main(){

//     char buf[6] = "Hello";

// 	printf("Before: %s\n", buf);
// 	ft_bzero(buf, 3);
// 	printf("After: ");
// 	for (int i = 0; i < 6; i++)
// 		printf("[%d]", buf[i]);
// 	printf("\n");

//     return 0;
// }