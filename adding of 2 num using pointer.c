#include<stdio.h>
main()
{
int a,b;
printf("enter two numbers");
scanf("%d",&a);
scanf("%d",&b);
int *pa=&a;
int *pb=&b;
int sum=(*pa)+(*pb);
printf("sum is %d",sum);
}
