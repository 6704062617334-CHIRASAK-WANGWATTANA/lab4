#include <stdio.h>
int main ()
{
	int a,b;
	char k[4];
	scanf("%s %d %d", k,&a,&b);

	for(int i = 0; i < b; i++){
        for(int j = 0; j < a; j++){
            printf("%s ", k);

        }printf("\n");
	}

}
