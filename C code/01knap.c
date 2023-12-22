//Arun_9523
#include<stdio.h>
#include<stdlib.h>
int max(int a,int b)
{   if(a>b)
	return a;
	else
	return b;	
}
int main()
{
	int w,n,i,j;
	int W[10],p[10];
	int V[10][10];
	int X[10];
	int total_profit;
	printf("Enter the number of items:");
	scanf("%d",&n);
	printf("Enter the capacity of the knapsack:");
	scanf("%d",&w);
	for(i=0;i<n;i++)
	{
		printf("Enter the Weights and profits of the item %d:",i+1);
		scanf("%d %d",&W[i],&p[i]);
	}
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=w;j++)
		{
			V[i][j]=0;
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=w;j++)
		{
			if(W[i-1]>j)
				V[i][j]=V[i-1][j];
			else
				V[i][j]=max(V[i-1][j],V[i-1][j-W[i-1]]+p[i-1]);
		}
	}
	printf("\nTABLE:\n");
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=w;j++)
		{
			printf("%d\t",V[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		X[i]=0;
	}
	i=n;
	j=w;
	while(i>0&&j>0)
	{
		if(V[i][j]!=V[i-1][j])
		{
			X[i-1]=1;
			i=i-1;
			j=j-W[i-1];
		}
		else
			i=i-1;
	}
	printf("\nSOLUTION SET:");
	for(i=0;i<n;i++)
	{
		printf("%d",X[i]);
	}
	total_profit=V[n][w];
	printf("\nTotal Profit =%d\n",total_profit);
	return 0;
}