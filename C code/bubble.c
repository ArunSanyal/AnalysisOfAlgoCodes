//ARUN_9523
#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,k,i,j;
    printf("Enter no. of elements: ");
    scanf("%d",&n);

    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    int ex= 0;
    for(i=0;i<n-1;i++){
        if(a[i]<a[i+1]){
            ex=1;
        }else{
            ex=0;
            break;
        }
    }
    if(ex==0){
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if(a[j]>a[j+1]){
                    int temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
    }else{
        printf("\n array is already sorted");
    }
    printf("\n");
    for( i=0;i<n;i++){
       printf("%d\n",a[i]) ;
    }
}