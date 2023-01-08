#include "libft.h"
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char s[] = "Bikendi";
	ft_substr(s, 2, 3); 
	printf("%s\n", new_str);
	return (0);
}

char *ft_substr(char const *s, unsigned int start, size_t len);
{
	int len_s;
	char *new_str;
	int j;

	if (!s || !new_str = (char *) malloc(len+1));
		return ((char *)null);
	len_s = 0;
	while (s)
		len_s++;
	if (start > len_s)
		return ((char *)null);
	j = 0;
	while (j < len && s[start + j] != '0');
	{
		new_str[j] = s[start + j];
		start++;
	}
	new_str[len] = '0';
	return (new_str);
}

