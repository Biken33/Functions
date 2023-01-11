#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/* int	main(void)
{
	char str[] = "Bikendi";
	printf("%zu\n", ft_strlen(str));
	return (0);
} */