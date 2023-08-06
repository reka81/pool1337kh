#include <unistd.h>

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
int main(int ac, char **av)
{
	int i;

	i = 0;
	if(ac == 2)
	{
		while(av[1][i] != '\0')
		{
			if(i % 3 == 0 && i % 5 == 0)
			{
				av[1][i] = '5'; 
			}
			else if(i % 3 == 0)
			{
				av[1][i] = '5';
			}
			else if(i % 5 == 0)
			{
				av[1][i] = '3';
			}
			i++;
		}
		ft_putstr(av[1]);
	}
	write(1, "\n", 1);
}
