#include <stddef.h>
#include <stdint.h>

void	ft_bzero(void *s, size_t n)
{
	uint8_t	*buf;

	buf = s;
	while (n--)
		*buf++ = 0;
}
