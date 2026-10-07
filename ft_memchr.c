#include <stdio.h>

void	*ft_memchr(const void *ptr, int ch, size_t n)
{
	 
    unsigned char *pt;

    pt=(const unsigned char *)ptr;
   

   size_t i =0;

    while(i<n)
    {
        if(pt[i] == (unsigned char)ch)
            return((void *)&pt[i])
        i++;

    }


	return (NULL);
}