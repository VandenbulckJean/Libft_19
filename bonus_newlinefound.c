#include "libft_bonus.h"

int		newlinefound(char *linebuffer)
{
	int		i;

	i = 0;
	while (linebuffer[i])
	{
		if (linebuffer[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}