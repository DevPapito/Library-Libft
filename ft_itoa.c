#include <stdlib.h>
#include <stdio.h>

static void ft_count_chars(int n, int *length)
{
	long	nl;
	char	c;

	(*length)++;
	nl = (long)n;
	if (nl < 0)
	{
		(*length)++;
		nl *= -1;
	}
	if (nl >= 10)
		ft_count_chars(nl / 10, length);
}

char	*ft_itoa(int n)
{
	char	*string;
	int		length;
	char	c;
	long	nl;

	length = 0;
	nl = (long)n;
	ft_count_chars(n, &length);
	string = malloc(sizeof(char) * length + 1);
	if (string == NULL)
		return (NULL);
	if (nl < 0)
	{
		nl *= -1;
		string[0] = '-';
	}
	length -= 1;
	while (length > 0)
	{
		c = nl % 10 + '0';
		string[length] = c;
		nl /= 10;
		length--;
	}
	return (string);
}
