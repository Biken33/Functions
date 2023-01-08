#include <stdio.h>
#include <string.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while ((str1[i] == str2[i]) && i < n - 1)
		i++;
	return (str1[i] - str2[i]);
}

int	main(void)
{
	const char	*p1 = "hhhhhhhxhhhhh";
	const char	*p2 = "hhhhhhhahhhhh";
	size_t		n = 0;
	printf("%d\n", ft_memcmp(p1, p2, n));
	printf("%d\n", memcmp(p1, p2, n));
	return (0);
}

 /* int ft_memcmp(const void *s1, const void *s2, size_t n)
 {
	size_t i;
	unsigned char *p1;
	unsigned char *p2;

	p1 = (unsigned char *) s1;
	p2 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (p1[i] == p2[i])
			i++;
		else 
			return (p1[i] - p2[i]);
	}
	return (0);
 }

 int 	main(void)
 {
	char str1[] = "Bikendi";
	char str2[] = "Bikondi";
	size_t c = 20;
	printf("%d\n", ft_memcmp(str1, str2, c));
	printf("%d\n", memcmp(str1, str2, c));
 } */