#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (!s) // igual a if (!s != 0)  o if (s == 0)
		return (0);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (0);
	i = 0;
	while (i < len)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}

/* int	main(void)
{
	char			*s = "Hola_Mundo";
	unsigned int	start = 4;
	size_t			len = 4;
	printf("%s\n", ft_substr(s, start, len));
	return (0);
} */
/* gccw ft_substr.c ft_strdup.c ft_memcpy.c ft_strlen.c */

