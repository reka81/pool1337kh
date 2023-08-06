int count_lines(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while(str[i] != '\0')
	{
		if(str[i] == '\n')
		{
			count++;
		}
	i++;
	}
	if(count > 0 &str[i - 1] != '\n')
	{
		count++;
	}
	return(count + 1);
}
//DONT PUSH THE INT MAIN FUNCTION ITS SOLE PURPOSE IS TESTING//
#include <stdio.h>

int main()
{
	char text[]= "line1\nline2\nline3";
	printf("%d", count_lines(text));
}

