#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	if (!s || !f)
		return (0);
	str = (char *)malloc(ft_strlen(s) + 1);
	if (str == 0)
		return (0);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		++i;
	}
	str[i] = '\0';
	return (str);
}

/* char	ft_f(unsigned int i, char str)
{
	i = 32;
	return (str - i);
}
int	main(void)
{
	char		*str = "hoAla mundo";
	char		*resultado;
	resultado = ft_strmapi(str, ft_f);
	printf("%s\n", resultado);
	return (0);
} */
/* gccw ft_strmapi.c ft_strlen.c */