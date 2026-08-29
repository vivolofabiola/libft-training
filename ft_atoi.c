#include "libft.h"

int ft_atoi(const char *str){
    int i = 0;
    int sign = 1;
    int result = 0;

    while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r'){
        i++;
    }

    if(str[i] == '-' || str[i] == '+'){
        if(str[i] == '-'){
            sign = -1;
        }
        i++;
    }

    while(ft_isdigit(str[i])){
        result = result * 10 + (str[i] - '0');
        i++; 
    }

    return(result * sign);

}