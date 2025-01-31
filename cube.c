#include<stdio.h>

void cube(int *a, int size);

int main()
{
	int i,j,size;
	
	printf("enter the size of array ");
	scanf("%d", &size);
	
	int a[size][size];
	
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("a[%d][%d] = ");
			scanf("%d",&a[i][j]);		
		}
		printf("\n");
	}	
	cube(a,size);
	return 0;
}

void cube(int *a,int size)
{
	int i,j;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d", a[i][j] * a[i][j] * a[i][j]);
		}
	}
}
