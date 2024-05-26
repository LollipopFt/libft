#include <stddef.h>

void *ft_memset(void *s, int c, size_t n) {
  int *mem;
  mem = s;
  while (n--)
    *mem++ = c;
  return (s);
}
