#include <string.h>
#include <stdio.h>

char* ft_strcat(char dst[], char src[])
{
	int i; 
	int j;

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	while (src[j] != '\0')
	{	
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i + j] = '\0'; // add terminating '/0'
	return(dst);
}

int	main(void)
{
	char dst[9] = "Bike";
	char src[] = "Urce";

/* 	printf("%s\n", ft_strcat(dst, src)); */
	printf("%s\n", strcat(dst, src)); 
	return(0);
}

// return the pointer s1.
// no ponía en argumentos los corchetes dst[] y scr[].
// en el while (dst[i]) es lo mismo que poner (dst[i] != '\0').

// se repite BikerUrceUrce (porque dst cambia antes del strcat).
// trace trap si tamaño buffer dst < dst + src + 1 (mejor strncat y strlcat)
// no se como replicar ese error en la función original.

// The string s1 must have sufficient space to hold the result.
