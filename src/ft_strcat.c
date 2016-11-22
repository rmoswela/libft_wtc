#include "libft.h"

/*function to append string src to string dest overwriting
 * nul terminating character and adding a new one after appending*/
char		*ft_strcat(char *dest, char *src)
{
	size_t	dest_len;
	int	loop;

	dest_len = ft_strlen(dest);
	loop = -1;
	while (src[++loop])
		dest[dest_len + loop] = src[loop];
	dest[dest_len + loop] = '\0';
	return (dest);
}
