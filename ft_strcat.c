#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dst, const char *src)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	while (src[j])
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (dst);
}

int	main(void)
{
	char	s1[20] = "Hola Mundo";
	char	s3[20] = "Hola Mundo";
	const char	s2[6] = "Cruel";

	printf("%s\n", ft_strcat(s1, s2));
	printf("%s\n", strcat(s3, s2));
	return (0);
}
/* gccw ft_strlcat.c ft_strlen.c */

// return the pointer s1.
// no ponía en argumentos los corchetes dst[] y scr[].
// en el while (dst[i]) es lo mismo que poner (dst[i] != '\0').

// se repite BikerUrceUrce (porque dst cambia antes del strcat).
// trace trap si tamaño buffer dst < dst + src + 1 (mejor strncat y strlcat)
// no se como replicar ese error en la función original.

// The string s1 must have sufficient space to hold the result.

/* char *ft_strcat(char *s1, const char *s2)
{
	int i;
	int j;
	
	i = 0;
	while (s1[i] != '\0')
		i++;
	j = 0;
	while (s2[j] != '\0')
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (&s1[i]);
}

int	main(void)
{
	char p1[] = "Primero";
	const char p2[] = "Segundo";

	char t1[] = "Primero";
	char t2[] = "Segundo";

	printf("%s\n", ft_strcat(p1, p2));
	printf("%s\n", strcat(t1, t2));

	return (0);
}  */