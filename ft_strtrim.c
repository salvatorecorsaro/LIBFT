#include <stddef.h>
#include <stdlib.h>

int start_set_finder(char const *s1, char const *set)
{
	int i;
	int counter;
	
	i = 0;
	while (s1[i] == set)
	{
		counter++;
		i++;
	}
	return (counter);
}

int end_set_finder(char const *s1, char const *set)
{
	int i;
	int counter;
	int len;
	
	i = 0;
	len = ft_strlen(s1);
	while (s1[len - i] == set)
	{
		counter++;
		i++;
	}
	return (counter);
}


char *ft_strtrim(char const *s1, char const *set)
{
	int		i;

	i = 0;

	if (s1)
		while (s1[i] == set)
				i++;
		while (s1)
}