#include "libft.h"

/* int	ft_isalpha(int y)
{
	if ((y >= 65 && y <= 90) || (y >= 97 && y <= 122))
		return (1);
	return (0);
} */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

int	main(void)
{
	int x = 'C'; // int c = 67;
	printf("%d\n", ft_isalpha(x));
	printf("%d\n", x);
	return (0);
}