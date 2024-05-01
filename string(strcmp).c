#include<stdio.h>
#include<string.h>
main()
{
	char s1[3];
	char s2[3];
	printf("enter two strings:\n");
	gets(s1);
	gets(s2);
	int ans=strncmp(s1,s2,3);
	printf("the output is %d",ans);
}
