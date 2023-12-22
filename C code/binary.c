//ARUN_9523
//ARUN_9523
#include<stdio.h>
#include<stdlib.h> 
int bs(int a[], int low, int high, int k)    
{    
    int mid;    
    if(high >= low)     
    {        mid = (low + high)/2;    

        if(a[mid] == k)    
        {                 
            return mid+1;    
        }                 
        else if(a[mid] < k)     
        {  
            return bs(a, mid+1, high, k);    
        }         
        else     
        {  
            return bs(a, low, mid-1, k);    
        }          
    }    
    return -1;     
}   
int main() 
{ 

    int k;
    int n=5;
    int a[5] = {11, 14, 25, 30, 40}; 
    printf("enter key to be searched");
    scanf("%d",&k); 
    int res = bs(a, 0, n-1, k);  
    printf("The elements are\n ");  
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);  
    } 
    if (res == -1)  
    {
      printf("\nElement is not present in the array");  
    }
    else 
    {
      printf("\nElement is present at %d position of array", res);  
    }
    return 0;  
}  