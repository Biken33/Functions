#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*dst;
	const char	*str;
	size_t		i;

	dst = (char *)dest;
	str = (const char *)src;
	i = 0;
	if (dest == 0 && src == 0)
		return (0);
	while (i < n)
	{
		dst[i] = str[i];
		i++;
	}
	return (dst);
}

 /* int	main(void)
{
	char		s1[] = "Destination";
	const char	s2[] = "Bikendi";
	size_t		n = 10;
	char		*a = ft_memcpy(s1, s2, n);
	char		*s = memcpy(s1, s2, n);
	printf("%s\n", a);
	printf("%s\n", s);
	printf("%s\n", s1);
	return (0);
} para copiar src desde el segundo caracter enviar pointer src + 1 (dest, src + 1, n)
 */

/* void *ft_memcpy(void *dst, const void *src, size_t n) 
{
	int i;
	unsigned char *p1;
	unsigned char *p2;

	p1 = (unsigned char *) dst;
	p2 = (unsigned char *) src;
	i = 0;
	while (i < n)
	{
		p2[i] = p1[i];
		i++;
	}
	return (dst);
}

int	main(void)
{
	char str1[] = "Destination";
	char str2[] = "Bikendi";
	size_t a = 10;
	char *s;
	char *d;

	s = ft_memcpy(str1, str2, a);
	d = memcpy(str1, str2, a);
	printf("%s\n", s);
	printf("%s\n", d);

	return (0);
} */

// porque devuelve dst y no dest ?? según man retorna original value of dest. 
// what´s the difference beetwen unsigned char *p1, char *p1, const char *p1
 
