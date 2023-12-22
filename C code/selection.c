//ARUN_9523
#include<stdio.h> 
#include<stdlib.h>  
void selection(int a[], int n)  
{  
    int i, j, key;  
    for (i = 0; i < n-1; i++)   
    {  
        key = i;   
        for (j = i+1; j < n; j++) {
             if (a[j] < a[key])
                key = j;
        }          
                int temp = a[key];  
                a[key] = a[i];  
                a[i] = temp;        
    }  
}    
int main()  
{  
    int n,i,j;
    printf("Enter no. of elements: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }  
    selection(a, n);

    printf("\n");
    for( i=0;i<n;i++){
       printf("%d\n",a[i]) ;
    } 
    return 0;  
}       