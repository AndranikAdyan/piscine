#include <stdio.h>

int	is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	minus_count;
	int	num;

	i = 0;
	num = 0;
	minus_count = 0;
	while (!is_digit(str[i]))
	{
		if (str[i] == '-')
			++minus_count;		
		++i;
	}
	while (is_digit(str[i]))
	{	
		num *= 10;
		num = (num + str[i] - '0');
		++i;
	}
	if (minus_count % 2 == 1)
		num = -num;
	return (num);	

}
int main(int argc, char **argv)
{
	printf("%d\n", ft_atoi(argv[1]));
	(void)argc;
	(void)argv;
}
