#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

/* int	main(void)
{
	ft_putendl_fd("hola mundo", 1);
} */
/* gccw ft_putendl_fd.c ft_putstr_fd.c ft_putchar_fd.c */