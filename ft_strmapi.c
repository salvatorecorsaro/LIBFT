#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*aux;
	int		i;

	if (!s || !f)
		return (NULL);
	if (!(aux = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	i = 0;
	while (s[i])
	{
		aux[ix] = f(i, s[i]);
		++i;
	}
	aux[i] = '\0';
	return (aux);
}