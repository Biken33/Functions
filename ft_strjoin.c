#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	if (s1 && s2)
	{
		i = ft_strlen(s1);
		str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
		if (!str)
			return (0);
		str = ft_memcpy(str, s1, i);
		j = 0;
		while (s2[j])
			str[i++] = s2[j++];
		str[i] = '\0';
		return (str);
	}
	return (0);
}

/* int	main(void)
{
	char	*s1 = "Hola Mundo ";
	char	*s2 = "Cruel";
	printf("%s\n", ft_strjoin(s1, s2));
	return (0);
} */
/* gccw ft_strjoin.c ft_strlen.c ft_memcpy.c */