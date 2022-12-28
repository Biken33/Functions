#include "libft.h"

int	ft_isalnum(int c)
{
	char	k; 
	
	k = c;
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' & c <= '9'))
		return (1);
	else
	printf("%d\n", c);
	printf("%c\n", k);
	return (0);
}

int	main(void)
{
	printf("%d", ft_isalnum(45));
	return (0);
}