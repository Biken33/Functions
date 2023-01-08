#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	i = 0;
	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}

/* int	main(void)
{
	char	*str1 = "hola Mundo";
	char	*str2 = NULL;
	size_t	n = 5;
	printf("%d", ft_strncmp(str1, str2, n));
	printf("%d", strncmp(str1, str2, n));
}
 */