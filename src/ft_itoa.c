#include "libft.h"

/*function that takes a number and converts it into a string and
 * returns that string or NULL if memory allocation fails*/
static int	ft_digitCount(int nbr)
{
	size_t	counter;

	counter = 1;
	if (nbr < 0)
	{
		nbr *= -1;
		counter++;
	}
	while (nbr > 9)
	{
		nbr = nbr / 10;
		counter++;
	}
	return (counter);
}

char		*ft_itoa(int nbr)
{
	char	*str_return;
	size_t	count;

	count = ft_digitCount(nbr);
	str_return = ft_strnew(count + 1);
	if (nbr == 0)
		str_return[count -1] = nbr + 48;
	if (nbr < 0)
	{
		str_return[0] = '-';
		nbr *= -1;
	}
	while (nbr > 0)
	{
		str_return[count - 1] = (nbr % 10) + 48;
		nbr = nbr / 10;
		count--;
	}
	return (str_return);
}
