#include <stdio.h>

int main(void)
{
	for(int i=1;i<10;i++)
	{
		printf("%d dan \n",i);
		for(int j=1;j<=10;i++)
		{	printf("%d x %d = %d \n",i,j,(i*j));}
		printf("\n");
		
	}
	return 0;
}
