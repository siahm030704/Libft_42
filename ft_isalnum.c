#include <stdio.h>

int ft_isalnum (char c){
    if ((c >= '0' && c <='9') || ((c >= 'a' && c <='z') || (c >= 'A' && c <='Z')))
      return(1);
    return(0);
}

int main(void)
{
    printf("%d\n", ft_isalnum('A'));
    printf("%d\n",ft_isalnum('0'));
    printf("%d\n", ft_isalnum('6'));
    printf("%d\n", ft_isalnum('@'));
    return (0);
}