#include <stdio.h>

int ft_isdigit (int c){
    if (c >= '0' && c <='9') 
      return(1);
    return(0);
}

int main(void)
{
    printf("%d\n", ft_isdigit('A'));
    printf("%d\n",ft_isdigit('0'));
    printf("%d\n", ft_isdigit('5'));
    printf("%d\n", ft_isdigit('@'));
    return (0);
}