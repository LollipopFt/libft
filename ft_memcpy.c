#include <stddef.h>
#include <stdint.h>

void	ft_memcpy(void *dest, const void *src, size_t n)
{
	uint8_t	*destbuf;
	const uint8_t	*srcbuf;

	destbuf = dest;
	srcbuf = src;
	while (n--)
		*destbuf++ = *srcbuf++;
}
