#include "../libft.h"

/*function to check if s1 is equal to, less than or
 * greater than s2 and return the integer 0 if equal or the difference*/
int		ft_strcmp(const char *s1, const char *s2)
{
	size_t	loop;

	loop = 0;
	while (s1[loop] && s2[loop] && (s1[loop] == s2[loop]))
	{
		loop++;
	}
	return (s1[loop] - s2[loop]);
}
