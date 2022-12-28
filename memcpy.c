#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, void *src, size_t n)
{
	if (dst == NULL)
			return (NULL);

	char *char_dst = (char *) dst;
	char *char_src = (char *) src;
	int i;

	i = 0;
	while (i < n)
	{
		char_dst[i] = char_src[i];
		i++;
	}

	return (dst);
}

int	main(void)
{
	char dst[] = "snnnnnnnnnnss";
	char src[] = "Copy this";
	
	ft_memcpy(dst, src, 8);

	printf("s2 is %s\n", src);
	printf("s1 is %s\n", dst);

}
