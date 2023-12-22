//ARUN_9523
#include<stdio.h>  
#include<stdlib.h>
  
void insert(int a[], int n)  
{  
    int i, j, key;  
    for (i = 1; i < n; i++) {  
        key = a[i];  
        j = i - 1;  
  
        while(j>=0 && key <= a[j])  
        {    
            a[j+1] = a[j];     
            j = j-1;    
        }    
        a[j+1] = key;    
    }  
}   
int main()  
{  
    int n,i;
    printf("Enter no. of elements: ");
    scanf("%d",&n);

    int a[n];
    for( int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    insert(a, n);  
    printf("\n");
    for(int i=0;i<n;i++){
       printf("%d\n",a[i]) ;
    }
  
    return 0;  
}     