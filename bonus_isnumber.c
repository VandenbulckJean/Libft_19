#include "libft_bonus.h"

int		isnumber(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}