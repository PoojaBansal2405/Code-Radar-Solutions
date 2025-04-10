#include<stdio.h>
#include <limits.h>
int main(){
    int N,i;
     scanf("%d",&N);
     
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int largest=-1;
    for(i=0;i<N;i++){
        if(arr[i]%2==0 && arr[i]>largest){
            largest=arr[i];
        }
        
    }
    printf("%d",largest);
}