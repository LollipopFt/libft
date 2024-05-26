#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n--)
		if (*s1++ != *s2++ || !*(s1 - 1))
			return (*(s1 - 1) - *(s2 - 1));
	return (0);
}
