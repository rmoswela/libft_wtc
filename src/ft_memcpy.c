#include "libft.h"

/*function to copy first n bytes from memory area src
 * to memory area dest without overlapping the memory areas*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*cDest;
	unsigned char	*cSrc;
	size_t		i;

	i = 0;
	cDest = (unsigned char *)dest;
	cSrc = (unsigned char *)src;
	while (i < n)
	{
		if (cDest == cSrc)
			ft_memmove(cDest, cSrc, i);
		else
			cDest[i++] = *cSrc++;
	}
	cDest[i] = '\0';
	return (cDest);
}
