#include<stdio.h>

int modifiy();

 main()
{
	int a[10]={1,1,1,1,1};
	
	modifiy(a,10);
	
	for(i=0;i<10;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("\n");
}

int modifiy(a[])
{
	for(i=0;i<10;i++)
	{
		a[i]*=3;
	}
}
