#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char) *s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return (&str[i]);
		i++;
	}
	return (0);
}

int	main(void)
{
	int			c = 'a';
	const char	*s = "hhhhhhhahhhhh";
	size_t		n = 20;
	printf("%s\n", ft_memchr(s, c, n));
	printf("%s\n", memchr(s, c, n));
	return (0);
} 

/* con -Wall ... no compila por los warning 
ft_memchr.c:25:17: warning: format specifies type 'char *' but the argument has type 'void *' [-Wformat]
        printf("%s\n", memchr(s, c, n));
con gcc si. 
Pero no se porque da ese error 
porque usa unsigned char c para decastear?
 */
