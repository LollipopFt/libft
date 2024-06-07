#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str;
	const unsigned char	*sts;

	if (!n)
		return (0);
	str = s1;
	sts = s2;
	while (*str++ == *sts++ && n--)
		;
	if (!n)
		return (0);
	else
		return ((int)*(str-1) - (int)*(sts-1));
}
