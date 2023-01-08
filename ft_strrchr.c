#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	
	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
	{
		if (str[i] == c)
			return ((char *) (str + i));
		i--;
	}
	return(0);
}

/* int	main(void)
{
	const char str[] = "Bikenkendi";

	printf("%s\n", ft_strrchr(str, 'k'));
	printf("%s\n", strrchr(str, 'k'));
	return (0);
} */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*str;

	str = (char *)s;
	i = ft_strlen(str);
	while (str[i] != (unsigned char)c)
	{
		if (i == 0)
			return (0);
		i--;
	}
	return (&str[i]);
}

/* int	main(void)
{
	char	*str = "hola Mundo";
	int		c = 'j';
	printf("%s\n", ft_strrchr(str, c));
	printf("%s\n", strrchr(str, c));
	return (0);
} */
/* gccw ft_strrchr.c ft_strlen.c */