#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

int	main(void)
{
	int	c = 66; //int c = 'B';
	printf("%c\n", c);
	printf("%d\n", ft_isalnum(c));
	return (0);
}

/* Como int si pones entre '' es un caracter 
si pones sin '' es valor ascii. 
es igual poner int c = 'B'; que int c = 66;  */