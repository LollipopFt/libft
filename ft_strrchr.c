#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*last_c;

	last_c = NULL;
	while (*s++)
		if (*s == c)
			last_c = (char *)s;
	return (last_c);
}
