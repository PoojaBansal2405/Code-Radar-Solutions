#include<stdio.h>
#include <limits.h>
int main(){
    int N,i;
     scanf("%d",&N);
     
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int largest=-1e9;
    for(i=0;i<N;i++){
        if(arr[i]%2==0 && arr[i]>largest){
            largest=arr[i];
        }
        
    }
    if(largest==-1e9){
        printf("-1");
    }
    else{
    printf("%d",largest);
    }
}