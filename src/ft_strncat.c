#include "../libft.h"

/*function to append n bytes of src string to dest string overwriting
 * nul terminating byte and then appending nul char to new string*/
char		*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	loop;
	size_t	dest_len;

	loop = 0;
	dest_len = ft_strlen(dest);
	while (src[loop] != '\0' && loop < n)
	{
		dest[dest_len + loop] = src[loop];
		loop++;
	}
	dest[dest_len + loop] = '\0';
	return (dest);
}
