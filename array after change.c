#include<stdio.h>
void change(int);//Declaration
int main()
{
int a[50];
int n;
int i,j;
printf("Enter the number of elements: ");
scanf("%d",&n);

printf("Enter %d elements\n",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

printf("The %d elementsare\n",n);
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}

printf("\nThe element in the array after change\n");
for(i=0;i<n;i++)
{
change(a[i]);
}
}
void change(int b)
{
b=b*2;
printf("%d\t",b);
}
