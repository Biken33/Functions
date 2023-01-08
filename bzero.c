#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t	i;

	if (!str)
		return;	
	i = 0;
	while (i < n)
	{
		*(unsigned char *) (str + i) = 0;
		i++;
	}
}

/* int	main(void)
{
	char str[] = "Bikendi";
	ft_bzero(str, 2);
	//bzero (str, 3);	
	return (0);
} */
// no se como confirmar que es correcto. 

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	ft_memset(str, 0, n);
}

/* int	main(void)
{
    char	str[50] = "this string.h library function";
	char	s[50] = "this string.h library function";
	ft_bzero(str, 30);
	bzero(s, 30);
    for (int x = 0; x < 50; x++)
		printf("%c", str[x]);
	for (int a = 0; a < 50; a++)
		printf("%c", s[a]);
    return (0);
} */