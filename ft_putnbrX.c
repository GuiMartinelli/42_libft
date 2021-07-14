#include <unistd.h>
#include <stdlib.h>

int	nb_size(long long n, int base)
{
	unsigned long long	i;
	int					size;

	size = 1;
	if (n < 0)
		i = n * -1;
	else
		i = n;
	while (i >= (unsigned long long)base)
	{
		i /= base;
		size++;
	}
	size++;
	return (size);
}

void	positive(unsigned long long nbr, int base, char *result, char *str)
{
	int	aux;

	aux = 0;
	while (nbr >= (unsigned long long)base)
	{
		*(result + aux) = *(str + (nbr % base));
		nbr /= base;
		aux++;
	}
	*(result + aux) = *(str + nbr);
	while ((result + aux) >= result)
	{
		write (1, &*(result + aux), 1);
		aux--;
	}
}

void	negative(unsigned long long nbr, int base, char *result, char *str)
{
	int	aux;

	aux = 0;
	while (aux < 8)
	{
		*(result + aux) = *(str + (base - ((nbr % base) + 1)));
		nbr /= base;
		aux++;
	}
	while (aux >= 0)
	{
		write (1, &*(result + aux), 1);
		aux--;
	}
}

void	nb_convert(char *str, long long n, int size, int base)
{
	unsigned long long	nbr;
	char				*result;

	if (n >= 0)
	{
		nbr = n;
		result = malloc(size * sizeof(char));
		if (result)
			positive(nbr, base, result, str);
	}
	else
	{
		nbr = (n * -1) - 1;
		result = malloc(9 * sizeof(char));
		if (result)
			negative(nbr, base, result, str);
	}
}

void	ft_putnbrX(long long n, char x)
{
	int	base;
	int	size;

	base = 16;
	size = nb_size(n, base);
	if (x == 'x')
		nb_convert("0123456789abcdef", n, size, base);
	else if (x == 'X')
		nb_convert("0123456789ABCDEF", n, size, base);
	write (1, " | ", 3);
}
