#include <string.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t i;
	size_t j;
	
	i = 0;
	while (dst[i] && i < dstsize)
		i++;
	j = 0;
	while (src[j] && i + j + 1 < dstsize)
	{
		dst[i + j] = src[j];
		j++;
	}
	if	(i != '\0')
		dst[i + j] = '\0';
	printf("%s\n", dst);
	return (i + strlen(src));
}

int	main(void)
{
	char dst[30] = "Biken";
	char src[] = "Urcelay";
	printf("%s\n", dst);
	printf("%zu\n", ft_strlcat(dst, src, 8));
	printf("%zu\n", strlcat(dst, src, 8)); 
	return (0);
}

// Lo correcto es que devuelva el string que está intentando crear 12,
// que sería dst + src en total. 
// el strlcat da 14 porque parte del nuevo dst creado tras el ft_strlcat. 
