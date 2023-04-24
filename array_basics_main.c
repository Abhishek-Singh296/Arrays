//Array Value at index-i

#include <stdio.h>
int main()
{
	int i;
	printf("Enter the array index number:");
	scanf("%d", &i);
	if(i<5)
	{
	int x[5]={2,10,15,17,21};
	printf("%d", x[i]);
	}
	else
	{
		printf("Enter Value between 0 & 4:");
	}
	return 0;
}
