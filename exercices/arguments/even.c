//NOTICE : I AM NOT ENTIRELY SURE WHAT THIS EXERCICE WAS NAMED IN THE EXAM BUT IM SURE IT HAD EVEN IN THE NAME(CHECK THE SUBJECTS TO KNOW MORE)//)
#include <unistd.h>

int main(int ac, char **av)
{
	int i;

	i = 0;
	if(ac == 2)
	{
		while(av[1][i] != '\0')
		{
			if(i % 2 == 0)
			{
				write(1, &av[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
