#include "../libft.h"

/*sets every character of the string to be cleared to '\0'*/
void		ft_strclr(char *s)
{
	size_t	len;

	len = ft_strlen(s);
	ft_bzero(s, len);
}
