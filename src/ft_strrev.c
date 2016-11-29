#include "../libft.h"

/*function to reverse string str and return a reversed string*/
char		*ft_strrev(char *str)
{
	int	loop;
	int	iLen;

	loop = -1;
	iLen = ft_strlen(str);
	while (++loop < iLen /2)
		ft_swap(&str[loop], &str[iLen - loop -1]);
	str[iLen] = '\0';
	return (str);
}
