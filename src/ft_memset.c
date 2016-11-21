#include "libft.h"

/*function that fills first n bytes of the memory area 
 * pointed by src with constant c*/
void	*ft_memset(void *src, int c, size_t n)
{
	size_t i;
	unsigned char *ptr;
	ptr = (unsigned char *)src;
	i = 0;
	while (i < n)
		ptr[i++] =(unsigned char) c;
	return (src);
}
