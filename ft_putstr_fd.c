#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	if (s != 0 && fd != '\0')
	{
		i = 0;
		while (s[i] != '\0')
			write (fd, &s[i++], 1);
	}
}

int	main(void)
{
	ft_putstr_fd("hola mundo", 1);
}