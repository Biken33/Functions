#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	str = (char *)s1;
	if (s2[i] == '\0')
		return (str);
	while (s1[i] != '\0' && i < n)
	{
		j = 0;
		while (s1[i + j] == s2[j] && (j + i) < n)
		{
			if (s2[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}

/* int	main(void)
{
	char	*str1 = "hola Mundo";
	char	*str2 = "";
	size_t	n = 20;
	printf("%s", ft_strnstr(str1, str2, n));
	printf("%s", strnstr(str1, str2, n));
} */