#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		write(1, &str[i++], 1);
}

// WE WILL USE TWO INDEXES ONE TO COUNT THE STRING AS USUAL STARTING FROM 0
// AND ONE TO COUNT THE LETTERS TO CHANGE THEM TO EITHER 3 OR 5 STARTING FROM 1
// IN THE EXAMPLE WE HAVE "it's me mario hehe" RESULTS IN "it5s35e 53r5o 5eh5"
// THE ' IS TREATED AS THE 3 CHAR SO WE HAVE TO TAKE THAT INTO ACCOUNT AND USE A SECOND INDEX
// WE DON'T NEED A SEPERATE CASE FOR % 3 && % 5 SINCE IT IS INCLUDED IN THE % 3
// BECAUSE NO MATTER WHAT, IF IT IS % 3 WE CHANGE THE CHAR TO 5 WHETER IT IS % 5 OR NOT
int	main(int ac, char **av)
{
	int	i;
	int	j:

	i = 0;
	j = 1;   // EXAMPLE START COUNTING WITH 1 NOT 0  
	if(ac == 2)
	{
		while(av[1][i] != '\0')
		{
			if (i == 0) // SKIP FIRST CHAR CAUSE 0 % ANY NUMBER ALWAYS == 0
			{
				i++;
				j++;
			}
			if(j % 3 == 0)
				av[1][i] = '5';
			}
			else if(j % 5 == 0)
				av[1][i] = '3';
			i++;
			j++;
		}
		ft_putstr(av[1]);
	}
	write(1, "\n", 1);
}
