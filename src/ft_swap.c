#include "../libft.h"

/*function to swap character values at address a and b*/ 
void		ft_swap(char *a, char *b)
{
	char	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

