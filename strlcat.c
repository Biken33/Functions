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
	while (src[j] && i + j < dstsize - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	if	(i != '\0')
		dst[i + j] = '\0';
	return (i + strlen(src));
}

int	main(void)
{
	char dst[9] = "Biken";
	char src[] = "Urce";
	printf("%zu\n", ft_strlcat(dst, src, 9));
	/* printf("%zu\n", strlcat(dst, src, 9)); */
	printf("%s\n", dst);
	printf("%zu\n", strlen(dst));
	return (0);
}

// Returns the initial length of dst plus the length of src.

// It will append at most
// dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless
// dstsize is 0 or the original dst string was longer than dstsize.

// Lo correcto es que devuelva el string que está intentando crear 12,
// que sería dst + src en total. 

// No se recrear el error de buffer cuand dst < dstsize.
