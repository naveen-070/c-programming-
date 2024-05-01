#include<stdio.h>
void maximum(int [],int);//Declaration
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

printf("\nThe largest element in the array is\n");
maximum(a,n);//calling
}
void maximum(int arr[],int size)
{
int max= arr[0];
int i;
for(i=1;i<size;i++)
{
if(arr[i]>max)
{
max=arr[i];
}
}
printf("%d",max);
}
	printf("enter %d elements\n")
}
