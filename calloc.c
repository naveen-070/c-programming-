
#include<stdlib.h>
main()
{
	int *p;
	int n;
	int i;
	printf("enter the number of elements:");
	scanf("%d",&n);
	p=(int*)calloc(n,sizeof(int));
	
	printf("\nthe %d values :\n",n);
	for(i=0;i<n;i++)
	printf("%d\t",*(p+i));
	
	free(p);
}
