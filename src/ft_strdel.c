#include "../libft.h"

/*function that takes address of string to be freed
 * frees it and set pointer to NULL*/
void	ft_strdel(char **as)
{
	ft_memdel(*as);
}
