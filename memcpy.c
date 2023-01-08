#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*dst;
	const char	*str;
	size_t		i;

	dst = (char *)dest;
	str = (const char *)src;
	i = 0;
	if (dest == 0 && src == 0)
		return (0);
	while (i < n)
	{
		dst[i] = str[i];
		i++;
	}
	return (dst);
}

/* int	main(void)
{
	char		dest[] = "aaaaa";
	const char	src[] = "hhhhhhhazzzz";
	size_t		n = 20;
	char		*str = ft_memcpy(dest, src, n);
	char		*s = memcpy(dest, src, n);
	printf("%s\n", str);
	printf("%s\n", s);
	return (0);
}
 */
