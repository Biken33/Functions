#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/* void	ft_f(unsigned int i, char *str)
{
		*str = *str + i;
}
int	main(void)
{
	char	str[] = "HolaaaMundoo";
	ft_striteri(str, ft_f);
	printf("%s\n", str);
	return (0);
}
 */