#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	if (!s1 || !set)
		return (0);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(&s1[i]);
	while (j && ft_strchr(set, s1[j + i]))
		j--;
	return (ft_substr(s1, i, j + 1));
}

/* int	main(void)
{
	char	*str = "hola";
	char	*set = "oqhl";
	printf("%s", ft_strtrim(str, set));
	printf("%s", strtrim(str, set));
	return (0);
}
 */
/* ft_strtrim.c ft_strchr.c ft_strlen.c ft_substr.c ft_strdup.c ft_memcpy.c */