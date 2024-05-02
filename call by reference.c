#include<stdio.h>
 void fun(int*, int*);
 void main ()
 {
 	int x=3,y=4;
 	fun(&x,&y);
 	printf("inside main(calling function)\n");
 	printf("x=%d y=%d\n", x,y);
 }
 void fun (int*x,int*y)
 {
 	*x=4;
 	*y=3;
 	printf("inside function(called function)\n");
 	printf("x=%d y=%d\n",*x,*y);
 }
