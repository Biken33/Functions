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

int	main(int argc, char **argv)
{
	int mine;
	int theirs;
	
	if (argc ==2)
	{
		mine = ft_atoi(argv[1]);
		theirs = atoi(argv[1]);
		printf("mine: %d\ntheirs: %d\n", mine, theirs);
	}
	return (0);
}

//Convert ascii string to integer. 

//con ---123 no se porque a mi me da -123 y en el otro 0.

