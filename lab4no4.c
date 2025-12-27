#include <stdio.h>
int main (void)
{
	int i=0,j;
	while(i<3){
		printf("row %d: ",i);
		i++;
		for(j=0;j<=5;j++)
			printf("%d ",j);
		printf("\n");

	}
}
