#include "../libft.h"

/*function to display string str to standard output*/
void		ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (++i < ft_strlen(str))
		ft_putchar(str[i]);
}
