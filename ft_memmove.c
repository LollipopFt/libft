#include <stddef.h>
#include <stdint.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	uint8_t	*destbuf;
	const uint8_t	*srcbuf;

	destbuf = dest;
	srcbuf = src;
	if (dest > src)
		while (n--)
			*(destbuf + n) = *(srcbuf + n);
	else
		while (n--)
			*destbuf++ = *srcbuf++;
	return (dest);
}
