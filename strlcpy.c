#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i; 
	size_t src_size;

	src_size = 0;
	while (src[src_size])
	{
		src_size++;
	}
	i = 0;
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_size);
} 


int	main(void)
{
	char dst[100] = "Biken";
	char src[] = "Urcelay";

	//printf("%zu\n", ft_strlcpy(dst, src, 10));
	printf("%zu\n", strlcpy(dst, src, 10));
	printf("%s\n", dst);
	return (0);
}

//RETURN VALUE: length of src. length of string trying to create.   

// take full size of destination buffer and guarantee NUL-termation if there is room
// copies up to dstsize - 1 characters from the string src to dst,
// NUL-terminating the result if dstsize is not 0.