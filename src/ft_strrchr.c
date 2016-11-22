#include "../libft.h"

/*function to locate character c in string s, return a
 * pointer to that character, if not found return NULL*/
char		*ft_strrchr(char *s, int c)
{
	char	*ptr;

	ptr = &s[ft_strlen(s)];
	while (*--ptr && *--ptr != c)
		;
	if (*ptr)
		return(ptr);
	else
		return NULL;
}
