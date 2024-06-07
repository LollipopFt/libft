#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*bg_ptr;
	const char	*lt_ptr;

	if (!*little)
		return ((char *)big);
	while (*big && len--)
	{
		if (*big == *little)
		{
			bg_ptr = big + 1;
			lt_ptr = little + 1;
			while (*lt_ptr && *bg_ptr)
			{
				if (*bg_ptr != *lt_ptr)
				{
					big++;
					continue;
				}
				bg_ptr++;
				lt_ptr++;
			}
			if (!*lt_ptr)
				return ((char *)big);
		}
		big++;
	}
	return (NULL);
}
