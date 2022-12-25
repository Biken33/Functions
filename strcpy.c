#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dst, const char *src)
{
	if	(dst == NULL) return NULL;

	size_t i;

	i = 0;
	while (src[i])
	{	
		dst[i] = src[i];
		i++;
	}
dst[i] = '\0';
return (dst);
}

int	main(void)
{
	char dst[100] = "Biken";
	char src[] = "Urcelay"; 

	char *p_dst;
	char *p_src;

	p_dst = dst;
	p_src = src;

	printf("print memoria dst: %p\n", dst);
	printf("print dst: %s\n", dst);
	printf("print pointer dst: %s\n", p_dst);
	printf("print length src: %zu\n", strlen(src));
	printf("print dst final con ft_strcpy: %s\n", ft_strcpy(dst, src));
	printf("print dst final con strcpy: %s\n", strcpy(dst, src));
	printf("print memoria dst final: %p\n", dst);
	printf("print pointer dst final: %s\n", p_dst);
	return (0);
}

// copy the string src to dst (including the terminating ‘\0’ character).
// si no hay espacio (incluido null termination da trace trap).

// buffer de dst al menos strlen(src) + 1. 
// no se replicar ese error. 
// return dst.