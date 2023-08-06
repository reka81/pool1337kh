#include <unistd.h>

int ft_count(char *str)
{
	int i;
	int count;
	
	count = 0;
	i = 0;
	while (str [i] != 0)
	{
		if (str[i] != ' ' &&str[i] && !(str [i] >= 9 && str[i] <= 13))
		{
			count++;
			while (str[i] != ' ' &&str[i] && !(str [i] >= 9 && str[i] <= 13))
			{
				i++;
			}
		}
		else
		i++;
	}
	return(count);
}
//DONT PUSH THE INT MAIN FUNCTION ITS SOLE PURPOSE IS TESTING//
#include <stdio.h>
int main()
{
	char *str = "      i d k     lollo hhhh h h";

	printf("%d", ft_count(str));
}
