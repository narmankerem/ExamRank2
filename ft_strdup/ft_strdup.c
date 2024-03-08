#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int len;
	int i;
	i = 0;
	len = 0;
	while (src[len])
		len++;
	char *dup;
	dup = (char *)malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (NULL);
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}