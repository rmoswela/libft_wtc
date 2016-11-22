#include "../libft.h"

/*function to compare initial n bytes of both s1 and s2 and return
 * integer less than, equal to, or greater than to display outcome of their
 * comparison*/
int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	counter;
	size_t	loop;

	loop = 0;
	counter = 0;
	while ((s1[loop] || s2[loop]) && counter<n)
	{
		if (s1[loop] != s2[loop])
			return (s1[loop] - s2[loop]);
		counter++;
		loop++;
	}
	return (0);
}
