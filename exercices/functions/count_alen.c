int	count_alen(char *str)
{
	int 	i;

	i = 0;
	while(str[i])
	{
		if (str[i] == 'a')
		{
			break;
			return (i);
		}
		i++;
	}
	return (i);
}
//DONT PUSH THE INT MAIN FUNCTION ITS SOLE PURPOSE IS TESTING//
#include <stdio.h>
int main()
{
	printf("%d", count_alen("it's me, mario!"));
}
