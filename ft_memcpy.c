#include <stdio.h>
void *ft_memcpy(void *dest, const void *src, size_t count){
    unsigned char *p;
    const unsigned char *s;
    size_t i=0;
    p=(unsigned char *)dest;
    s=(const unsigned char *)src;
    while (i < count)
    {
p[i]=s[i];
       i++;
    }
    return(dest);
}
