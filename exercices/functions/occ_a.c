int occ_a(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while(str[i] != '\0')
	{	
		if (str[i] == 'A')
			count++;
		i++;
		
	}
	return(count);
}
//DONT PUSH THE INT MAIN FUNCTION ITS SOLE PURPOSE IS TESTING//
#include <stdio.h>
int main()
{
	char *str = "zAAzaa";
	printf("%d", occ_a(str));
}
