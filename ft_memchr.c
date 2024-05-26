#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		chr;
	const unsigned char	*str;

	chr = c;
	str = s;
	while (*str != chr && *str++ && n--)
		;
	if (!*str)
		return (NULL);
	return ((void *)str);
}
