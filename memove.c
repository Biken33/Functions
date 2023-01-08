#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char		*dst;
	const char	*str;
	size_t		i;

	dst = (char *)dest;
	str = (const char *)src;
	i = 0;
	if (dest == 0 && src == 0)
		return (0);
	if (dst > str)
	{
		while (len-- > 0)
			dst[len] = str[len];
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}

/* int	main(void)
{
	char		dest[] = "aaaaaaaaaaaaaaaaaaaaaaaaa";
	const char	src[] = "hhhhhhhazzzz";
	size_t		n = 4;
	char		*str = ft_memmove(dest, src, n);
	char		*s = memmove(dest, src, n);
	printf("%s\n", str);
	printf("%s\n", s);
	return (0);
} */
/* gccw ft_memmove.c ft_memcpy.c */