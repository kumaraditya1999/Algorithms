#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter any number:\n");
	scanf("%d",&n);
	for(i=0;i<2*n-1;i++)
	{
		for(j=0;j<2*n-1;j++)
		{
			if((i<n)&&(j<n))
			{
				if(j>=i)
					printf("%d ",n-i);
				else if(i>j)
					printf("%d ",n-j);
				else
					printf("%d ",n);
			}
			else if((i<n)&&(j>=n))
			{
				if(j<2*n-i-1)
					printf("%d ",n-i);
				else if(j>=2*n-i-1)
					printf("%d ",n-(2*n-j-2));
			}
			else if((i>=n)&&(j<n))
			{
				if(2*n-i-1>j)
					printf("%d ",n-j);
				else if(2*n-i-1<=j)
					printf("%d ",i+2-n);
				else
					printf("%d ",n);
			}
			else
			{
				if(i-n>=j-n)
					printf("%d ",i-n+2);
				else if(i-n<j-n)
					printf("%d ",j-n+2);
			}
		}
		printf("\n");
	}
}
