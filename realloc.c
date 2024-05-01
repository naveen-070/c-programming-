#include<stdlib.h>
main()
{
	int *p;
	int n;
	int i;
	printf("enter the number of elements:");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	
	printf("\nthe %d values :\n",n);
	for(i=0;i<n;i++)
	printf("%d\t",&(*(p+i)));
	
	int m;
	printf("\n\nenter the new number of elements: ");
	scanf("%d",&m);
	p=(int*)realloc(p,m*sizeof(int));
	
	printf("\nenter the %d values :\n",m);
	for(i=n;i<m;i++)
	scanf("%d",&(*(p+i)));
	
	printf("\nthe %d values:\n",m);
	for(i=0;i<m;i++)
	printf("%d\t",*(p+i));
	
	free(p);
}
