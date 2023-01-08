#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*s1;

	s1 = (unsigned char *)str;
	i = 0;
	while (i < n)
		s1[i++] = (unsigned char)c;
	return (s1);
}

/* int	main(void)
{
	char		str[] = "aaaaaaaaaaaaaaaaaaaaaaaaa";
	int			c = 'z';
	size_t		n = 20;
	char		*s = ft_memset(str, c, n);
	char		*s1 = memset(str, c, n);
	printf("%s\n", s);
	printf("%s\n", s1);
	return (0);
} */
