#include<stdio.h>
main()
{
	int a[50][50];
	int b[50][50];
	int i,j;
	int n;
	printf("Enter the elements:\n")
	scanf("%d",&n);
	printf("enter the elements int array a:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the elements int array b:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}

