#include <stdio.h>


int ft_isalnum(int c){
    // return((a >= '0' && a <= '9' || a >= 'a' && a <= 'z' || a >= 'A' && a <= 'Z'));
    return(ft_isalpha(c) || ft_isdigit(c));

}
// int main(){

//     int a = '*';
    
//     printf("%d", ft_isalnum(a));

//     return 0;
// }