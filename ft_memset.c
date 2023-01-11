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

/* void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*s1;

	s1 = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		s1[i] = (unsigned char)c;
		i++;
	}
	return (s1);
} */

/* int	main(void)
{
	char		str[] = "aaaaaaaaaaaaaaaaaaaaaaaaa";
	int			c = 'z';
	size_t		n = 5;
	char		*p = ft_memset(str, c, n);
	char		*q = memset(str, c, n);
	printf("%s\n", p);
	printf("%s\n", q);
	return (0);
}  */
