#include <stdio.h>
int ft_isascii(int c){
    if (c >= 0 && c <= 127)
              return(1);
    return(0);
}

int main(void)
{
    printf("%d\n", ft_isascii('A'));  // 1
    printf("%d\n", ft_isascii(0));    // 1
    printf("%d\n", ft_isascii(127));  // 1
    printf("%d\n", ft_isascii(128));  // 0
    printf("%d\n", ft_isascii(-1));   // 0

    return (0);
}