#include <stdio.h>
int ft_memcmp(const void *L, const void *R, size_t count){
    unsigned char *s1;
    unsigned char *s2;
     size_t i=0;

     s1 =(const unsigned char *)L;
     s2=(const unsigned char *)R;

     while (i < count)
     {
        if (s1[i] == s2[i])
           i++;
        else
        return(s1[i] - s2[i]);
     }
     
return (0);

}
int main(void)
{

char buffer1[] = "Z";
  char buffer2[] = "A";

  int n;
  n=ft_memcmp( buffer1, buffer2, sizeof(buffer1) );
  printf ("%d",n);

}