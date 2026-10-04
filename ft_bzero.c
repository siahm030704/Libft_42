#include <stdio.h>
void ft_bzero(void *ptr  , size_t num ){
    unsigned char	*p;
    size_t i=0;
    p = (unsigned char *)ptr;
    while (i<num){
p[i]=0;
             i++;
    }
         
         
}