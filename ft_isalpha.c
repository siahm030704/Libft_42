#include <stdio.h>

int ft_isalpha (int c){
    if ((c >= 'a' && c <='z') || (c >= 'A' && c <='Z'))
      return(1);
    return(0);
}

int main(void)
{
    printf("%d\n", ft_isalpha('A'));
    printf("%d\n",ft_isalpha('g'));
    printf("%d\n", ft_isalpha('5'));
    printf("%d\n", ft_isalpha('@'));
    return (0);
}