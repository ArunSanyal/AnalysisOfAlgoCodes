//Arun_9523
#include<stdio.h>
void swap(float*x,float*y)
{
	float temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

void sort(float r[50],float w[50],float p[50],int n)
{
	int i,j;
	float temp;
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(r[j]<r[j+1])
			{
				swap(&r[j],&r[j+1]);
				swap(&w[j],&w[j+1]);
				swap(&p[j],&p[j+1]);
				
			}
		}
	}
}
				
			

int main()
{
	int n,i,m;
	float currentw,profit;
	printf("Enter the number of elements=");
	scanf("%d",&n);
	float w[n],p[n];
	float x[n],r[n],z[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the weights and profits of each respective element=");
		scanf("%f %f",&w[i],&p[i]);
	}
	printf("\nEnter the capacity of the knapsack=");
	scanf("%d",&m);
	for(i=0;i<n;i++)
	{
		r[i]=p[i]/w[i];
		z[i]=r[i];
		x[i]=0;
	}
	sort(r,w,p,n);
	for(i=0;i<n;i++)
	{
		printf("%f\t",r[i]);
	}
	currentw=0;
	profit=0;
	for(i=0;i<n;i++)
	{
		if(currentw + w[i] <= m)
		{
			
			x[i]=1;
			currentw=currentw+w[i];
			profit=profit+(x[i]*p[i]);
		}
		else
		{
			x[i]=(m-currentw)/w[i];
			currentw=m;
			profit=profit+(x[i]*p[i]);
			break;
		}
	}
	sort(z,x,p,n);
	printf("\nSolution set=");
	for(i=0;i<n;i++)
	{
		printf("%f\t",x[i]);
	}
	printf("\nTotal profit=%f\n",profit);
	return 0;
}

