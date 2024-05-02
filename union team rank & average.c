//
#include<stdio.h>
union team 
{
	int rank;
	float average;
};
main()
{
	union team t;
	scanf("%d",&t.rank);
	printf("rank: %d\n",t.rank);
	scanf("%f",&t.average);
	printf("average: %f\n",t.average);
	printf("the memory occupied is: %d",sizeof(t));
}
