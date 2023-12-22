//ARUN_9523
#include<stdio.h>
#include<stdlib.h>
int part(int a[],int low,int high)
{
   
    int x =a[high];
    int i=(low-1);
    for(int j=low;j<=high-1;j++)
    {
        if(a[j]<=x)
        {
            i++;
            int t=a[i];
            a[i]=a[j];
            a[j]=t;
        }  
    }
    int t=a[i+1];
    a[i+1]=a[high];
    a[high]=t;
    return(i+1);
}
void quick(int a[],int low,int high)
{
    if(low<high)
    {
        int p=part(a,low,high);
        quick(a,low,p-1);
        quick(a,p+1,high);
    }
}
int main()
{
    int i,n;
    printf("enter the elements");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    quick(a,0,n-1);
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}