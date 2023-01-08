#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int i; 
	int sign;
	int numb;

	i = 0; 
	sign = 1;
	while	(str[i] >= 9 && str[i] <= 13 || str[i] == 32)
		i++;
	while	(str[i] == '-' || str[i] == '+')
	{
		if	(str[i] == '-')
			sign = sign * -1;
		i++;
	}
	numb = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		numb = (numb * 10) + (str[i] - '0');
		i++;
 	}	
	return (sign * numb);
}

int	main(void)
{
	char	*nb1 = "--123";
	char	*nb2 = "--123";
	printf("%d\n", ft_atoi(nb1));
	printf("%d\n", atoi(nb2));
	return (0);
}

/* En el ft da el número pero en el normal da 0 ¿? */
 