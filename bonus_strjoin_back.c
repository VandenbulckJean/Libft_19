#include "libft_bonus.h"

char	*strjoin_back(char *line, char *buffer)
{
	char	*newline;
	char	*temp;
	int		i;

	i = 0;
	if (!(newline = (char*)malloc(sizeof(char) *
	(ft_strlen(line) + ft_strlen(buffer) + 1))))
		return (NULL);
	temp = newline;
	while (line[i])
		*temp++ = line[i++];
	while (*buffer)
		*temp++ = *buffer++;
	*temp = '\0';
	free(line);
	return (newline);
}