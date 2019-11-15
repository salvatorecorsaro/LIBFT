#include <stddef.h>

void *ft_calloc(size_t nitems, size_t size)
{
	size_t		total;
	void		*r;

	total = nitems * size;
	if (!(r = malloc(total)))
		return (0);
	ft_bzero(r, total);
	return (r);
}