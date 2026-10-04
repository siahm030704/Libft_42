#include <stdio.h>
void *ft_memset(void *ptr , int value , size_t num ){
    unsigned char	*p;
    size_t i=0;
    p = (unsigned char *)ptr;
    while (i<num){
         p[i]=value;
             i++;
    }
         
           return(ptr);
}