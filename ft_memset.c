#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*mem;

	mem = s;
	while (n--)
		*mem++ = (unsigned char)c;
	return (s);
}
