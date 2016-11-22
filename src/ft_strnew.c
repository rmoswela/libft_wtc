#include "../libft.h"

/*function to allocate memory for a new string and initialize
 * each character of string with 0 and returns it or NULL*/
char		*ft_strnew(size_t size)
{
	char	*ptr;

	ptr = ft_memalloc(size);
	return (ptr);
}
