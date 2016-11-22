#include "../libft.h"

/*function to copy first n bytes from memory area src
 * to memory area dest without overlapping the memory areas*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*cDest;
	unsigned char	*cSrc;
	size_t		loop;

	loop = 0;
	cDest = (unsigned char *)dest;
	cSrc = (unsigned char *)src;
	while (loop < n)
	{
		if (cDest == cSrc)
			ft_memmove(cDest, cSrc, loop);
		else
			cDest[loop++] = *cSrc++;
	}
	cDest[loop] = '\0';
	return (cDest);
}
