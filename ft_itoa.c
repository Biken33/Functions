#include "libft.h"

static char	*ft_to_str(char *str, unsigned int numb, long int len)
{
	while (numb > 0)
	{
		str[len--] = 48 + (numb % 10);
		numb = numb / 10;
	}
	return (str);
}

static size_t	ft_intlen(int n)
{
	int		len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	num;
	size_t			len;

	len = ft_intlen(n);
	str = (char *)malloc(len + 1);
	if (!str)
		return (0);
	str[len--] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (n < 0)
	{
		num = n * -1;
		str[0] = '-';
	}
	else
		num = n;
	return (ft_to_str(str, num, len));
}

/* int	main(void)
{
	int	c = -1233434334;
	printf("%s\n", ft_itoa(c));
	return (0);
}
 */