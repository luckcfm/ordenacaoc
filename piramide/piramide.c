#include <stdio.h>

void piramide(int n);
int main()
{
	piramide(13);
}

void piramide(int n)
{
	int i,j,k = 0,l = 0;
	for(i = n; i >= 0; i--)
	{
		k =  0;
		int espaco = n;
		while(k <= i)
		{
			printf(" ");
			k++;
		}
		for(j = 0; j <= l*2; j++)
		{	
				printf("*");
		}
		l++;
		printf("\n");
	}
}
