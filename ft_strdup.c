#include "libft.h"
#include <string.h>

/* char	*ft_strdup(const char *s1)
{
    //int s1_size;
    static char *dup; // pointer para guardar duplicado de s1. It must be static, lest the string be lost when the function terminates.
    char *dup_offset;

    // Allocate memory for duplicate. Busca memoria para el duplicado 
    //s1_size = ft_strlen(s1); // función contador no me funciona
	int j = 0;
	while (s1[j] != '0')
		j++;
	dup = (char *) malloc (sizeof(char) * j + 1);
    if( dup == NULL)
        return( (char *)NULL);

    // Copy string 
    dup_offset = dup; //copies the original string into the duplicate. 
						//use the dup_offset pointer to dup so that the address of dup (the duplicate string) is retained.
    while(*s1)
    {
        *dup_offset = *s1;
        dup_offset++;
        s1++;
    }
    *dup_offset = '\0';

    return(dup);
} 

int main(void)
{
    char original[12] = "Ooga Booga!";
    char *duplicate;
    int o_len,d_len;

    duplicate = ft_strdup(original);
    o_len = strlen(original);
    d_len = strlen(duplicate);

    printf("Original String: '%s' (%d)\n",
            original,o_len);
    printf("Duplicate string: '%s' (%d)\n",
            duplicate,d_len);

    return(0);
} */

char	*ft_strdup(const char *s1)
{	
	int		i;
	char	*str;

	i = ft_strlen(s1);
	str = (char *)malloc(sizeof (*s1) * (i + 1));
	if (str == 0)
		return (0);
	ft_memcpy(str, s1, i);
	str[i++] = '\0';
	return (str);
}

/* int	main(void)
{
	char	*src = "hola mundo";
	printf("%s\n", ft_strdup(src));
	printf("%s\n", strdup(src));
	return (0);
} */
/* gcc ft_strdup.c ft_memcpy.c ft_strlen.c */

// por qué hace sizeof(*s1)? no se supone que es 1? 