#include <string.h>
#include <stdio.h>

void	*ft_memset(void *str, int c, size_t len)
{
	int i;

	i = 0;
	while	(str[i] < len)
	{
		str[i] = c; 
	}
return (str);
}

int	main(void)
{
	char str[100] = "Bikendi";
	int u;

	printf("%s\n", ft_memset(str, 'u', 10));
/* 	printf("%zu\n", memset(str, 'u', 10)); */
	return (0); 
}

// fill a byte string with a byte value.
// writes len bytes of value c (converted to an unsigned
// char) to the string b.

