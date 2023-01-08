#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	num;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		num = n * -1;
	}
	else
	{
		num = n;
	}
	if (num >= 10)
	{
		ft_putnbr_fd(num / 10, fd);
	}
	ft_putchar_fd(num % 10 + '0', fd);
}

/* int	main(void)
{
	ft_putnbr_fd(243, 1);
} */
/* gccw ft_putnbr_fd.c ft_putchar_fd.c */