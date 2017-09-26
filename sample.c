#include<stdio.h>
int main()
{
	int i,n,a,sum;
	sum=0;
	printf("\ngive the number of numbers to be printed\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		sum+=a;
	}
	printf("\n the sum is %d",sum);
}
