#include <string.h>
#include <stdio.h>

char	*ft_strncpy(char *dst, char *src, size_t len)
{
	size_t i; 
	
	i = 0; 
	while	(src[i] !='\0' && i <= len - 1)
	{
		dst[i] = src[i];
		i++;
	}
	if	(i == len)
		dst[i] = '\0';
	return (dst);
}

int	main(void)
{
	char dst[30] = "Bikondi";
	char src[] = "Urcelay";

	char *p_dst;
	char *p_src; 
	
	p_dst = dst;
	p_src = src;

	printf("print dst final: %s\n", ft_strncpy(dst, src, 3));
	//printf("print dst final: %s\n", strncpy(dst, src, 3));

	return (0);
}

// functions copy at most len characters from src into dst. Only copy len characters.
// If src is less than len characters long, the remainder of dst is
//filled with ‘\0’ characters.  Otherwise, dst is not terminated.

//RETURN VALUE: dst. 
//does not guarantee to NULL terminate the string itself, this must be done explicitly.

//copia len caracteres de src a dst. 
//si len > strlen(src) resto de dst será null. Copia len y continua con nulos. 
// si len < strlen(src) copia len y continua con dst. 
//Error si buffer dst es < que len. 
