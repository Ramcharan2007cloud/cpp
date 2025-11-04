#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	int fact=1;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("the fact :%d",fact);
}
