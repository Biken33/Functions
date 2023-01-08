#include "libft.h"

/* void	ft_bzero(void *str, size_t n)
{
	size_t	i; // if n = 0 does nothing 

	if (!str) // if (str == NULL)
		return;	
	i = 0;
	while (i < n)
	{
		*(unsigned char *) (str + i) = 0;
		i++;
	}
} */

void	ft_bzero(void *str, size_t n)
{
	ft_memset(str, 0, n);
}

/* int	main(void)
{
    char	str[50] = "this string.h library function";
	char	s[50] = "this string.h library function";
	ft_bzero(str, 5);
	bzero(s, 5);
    for (int x = 0; x < 50; x++)
		printf("%c", str[x]);
	printf("%c\n", ' ');
	for (int a = 0; a < 50; a++)
		printf("%c", s[a]);
    return (0);
} */
