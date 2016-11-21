#include "libft.h"

/*function to copy n bytes of memory from memory area src to 
 * memory area destination without overlapping*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*cDest;
	unsigned char	*cSrc;
	size_t		i;

	i = 0;
	cDest = (unsigned char *) dest;
	cSrc = (unsigned char *) src;
	while (i < n)
	{
		if (cDest == cSrc)
			ft_memmove(cDest, cSrc, i);
		else
			*cDest++ = *cSrc++;
		i++;
	}
	*cDest = '\0';
	return (cDest);
}
