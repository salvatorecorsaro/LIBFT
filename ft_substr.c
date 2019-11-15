#include <stddef.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start,
size_t len)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = NULL;
	if (s != NULL)
	{
		ptr = malloc((len + 1) * sizeof(char));
		if (ptr == NULL)
			return (NULL);
		ptr[len] = '\0';
		while (i < len + start)
		{
			if (i >= start)
				ptr[i - start] = s[i];
			i++;
		}
		return (ptr);
	}
	return (NULL);
}