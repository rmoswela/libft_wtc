#include "libft.h"

/*function to join string s1 and string s2 together to make
 * a new string if memory allocation fails it returns NULL*/
char		*ft_strjoin(char const *s1, char const *s2)
{
	int	loop;
	int	loop2;
	size_t	len;
	char	*fresh_str;

	loop = -1;
	loop2 = -1;
	len = ft_strlen(s1) + ft_strlen(s2);
	fresh_str = (char *)malloc(sizeof(char) * len);
	if (fresh_str == NULL)
		return (NULL);
	else
	{
		while (s1[++loop] != '\0')
			fresh_str[loop] = s1[loop];
		while (s2[++loop2] != '\0')
			fresh_str[loop++] = s2[loop2];
		fresh_str[loop] = '\0';
		return (fresh_str);
	}
}
