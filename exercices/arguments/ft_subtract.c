//NOTICE:THE FUNCTION MAY VARY FROM ADD ,SUBTRACT,DIVIDE AND MULTIPLY LEARN TO BE FLEXIBLE AND DONT JUST MEMORIZE THE CODE (SAME GOES FOR A LOT OF FUNCTIONS U WILL FIND ON REPOSITORIES U FIND ONLINE)//
void	ft_subtract(int a, int *ptr)
{
	*ptr = *ptr - a;
}
//DONT PUSH THE INT MAIN FUNCTION ITS SOLE PURPOSE IS TESTING//
#include <stdio.h>

int main()
{
	int a;
	int *ptr;
	int c;
	
	a = 5;
	c = 6;
	ptr = &c;
	
	ft_subtract(a, ptr);
	printf("%d", c);
}

