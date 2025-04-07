#include<stdio.h>
#include <limits.h>
int main(){
    int N,i;
     scanf("%d",&N);
     
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int largest=INT_MIN;
    for(i=0;i<N;i++){
        if(arr[i]%2==0 && arr[i]>largest){
            largest=arr[i];
        }
        else if(arr[i]%2!=0 && arr[i]>largest){
            largest=-1;
        }
    }
    printf("%d",largest);
}