#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s != c && *s++)
		;
	if (!*s)
		return (NULL);
	return ((char *)s);
}
