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
		tab[i++] = '\0';
	return (tab);
}

/* int	main(void)
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
} */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	b;
	void	*p;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	b = count * size;
	p = malloc(b);
	if (p == NULL)
		return (NULL);
	else
		ft_bzero(p, b);
	return (p);
}

int	main(void)
{
	int *a; // creo una variable entera para guardar un puntero
	a = ft_calloc(4, 3); // guardo puntero que devuelve calloc 
	printf("%d\n", *a);
	return (0);
}

// error al compliar por ft_bzero