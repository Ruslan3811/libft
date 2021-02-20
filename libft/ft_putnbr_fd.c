#include "libft.h"

void				ft_putnbr_fd(int n, int fd)
{
	unsigned int	nmb;

	if (n < 0)
	{
		nmb = n * -1;
		ft_putchar_fd('-', fd);
	}
	else
		nmb = n;
	if (nmb / 10 != 0)
		ft_putnbr_fd(nmb / 10, fd);
	ft_putchar_fd(nmb % 10 + '0', fd);
}
