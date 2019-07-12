#include <stdio.h>

int main()
{
	for(int i=1;i<=5000;i++)
	{
		for(int j=1; j<=5000;j++)
		{
			printf("%d x %d = %d \n",i,j,(i*j));
		}
		printf("\n");
	}
	return 0;
}
