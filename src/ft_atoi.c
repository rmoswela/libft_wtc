#include "../libft.h"

/*function converts string pointed to by str to an integer
 * and return that integer*/
int		ft_atoi (char *str)
{
	int	loop;
	int	nbr;
	int	result;

	loop = 0;
	nbr = 1;
	result = 0;
	if (str[loop] == '-')
	{
		nbr = -1;
		loop++;
	}
	while (str[loop] != '\0' && (str[loop] >= '0' && str[loop] < '9'))
		result = (result * 10) + str[loop++] - 48;
	return(result * nbr);
}
