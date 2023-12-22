//ARUN_9523
#include<stdio.h>
#include<stdlib.h>
int ls(int a[], int n, int k) {  
   
  for (int i = 0; i < n; i++)  
    {  
        if (a[i] == k)  
        return i+1;  
    }  
  return -1;  
}  
int main() 
{  
int n,i,j,k;
    printf("Enter no. of elements: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
      scanf("%d",&a[i]);
    }  
    printf("enter kue to be searched");
    scanf("%d",&k);
  int r = ls(a, n, k); 
  if (r == -1)  
  printf("\nElement is not prent in the array");  
  else  
  printf("\nElement is prent at %d position of array", r);  
  return 0;  
}  