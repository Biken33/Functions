#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dst, char *src, size_t n)
{
	int i;
	int j;

	i = 0;
	j = 0;

	i = 0;
	while (dst[i])
		i++;
	j = 0;
	while (src[j] && j < n)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
dst[i + j] = '\0';
return (dst);
}

int	main(void)
{
	char dst[16] = "Biken";
	char src[] = "Urcelay";

	/* char *p_dst;
	char *p_src;
	
	p_dst = dst;
	p_src = src; */
	printf("%s\n", ft_strncat(dst, src, 5));
	printf("%s\n", strncat(dst, src, 5));
	return (0);
}
// Con menos de 16 no hay espacio para strncat y da error de buffer, 
// overflow, trace trap... 

// No se como replicar eso en el ft_strncat.