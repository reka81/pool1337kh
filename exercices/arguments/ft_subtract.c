//NOTICE:THE FUNCTION MAY VARY FROM ADD ,SUBTRACT,DIVIDE AND MULTIPLY LEARN TO BE FLEXIBLE AND DONT JUST MEMORIZE THE CODE (SAME GOES FOR A LOT OF FUNCTIONS U WILL FIND ON REPOSITORIES U FIND ONLINE)//
void	ft_subtract(int a, int *ptr)
{
	*ptr -= a;
}
//DONT PUSH THE INT MAIN FUNCTION ITS SOLE PURPOSE IS TESTING//
#include <stdio.h>

int main() {
    int num = 110;
    int result = 60;

    printf("Before: num = %d\n", num);
    ft_subtract(result, &num);
    printf("After: num = %d\n", num);

    return 0;
}
