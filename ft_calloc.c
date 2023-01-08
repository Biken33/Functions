#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tab;
	size_t			i;

	i = 0;
	tab = (unsigned char *)malloc(size * count);
	if (tab == 0)
		return (0);
	while (i < count * size)
		tab[i++] = '0';
	return (tab);
}

int	main(void)
{
	size_t	count = 20;
	size_t	size = 2;
	char	*str;
	char	*s;
	str = ft_calloc(count, size);
	s = calloc(count, size);
	printf("%s\n", str);
	printf("%s\n", s);
	return (0);
}

/* en realidad para alocar memoria y devolver el puntero
no necesitas igualarlo a '0' ¿no? 
xq. *tab lo hace como unsigned char? */