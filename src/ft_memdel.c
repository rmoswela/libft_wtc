#include "../libft.h"

/*function takes address of memory area that needs to be freed
 * and frees it then puts the pointer to NULL*/
void	ft_memdel(void	**p);
{
	free(*p);
	*p = NULL;
}
