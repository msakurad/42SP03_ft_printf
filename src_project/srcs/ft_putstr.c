#include <unistd.h>

void	ft_putstr(char *s)
{
	while (*s)
	{
		write(1, s, 1);
		s++;
	}
}

int	main(void)
{
	char	*str;

	str = "abacate12345";
	ft_putstr(str);
	return (0);
}