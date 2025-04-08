#include<stdio.h>
int main(){
    int N,i,temp;
     scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<N;i++){
        if(arr[i]==0){
            temp=arr[i];
            arr[i]==arr[i+1];
            arr[N-1]=temp;
        }
    }
    for(i=0;i<N;i++){
    printf("%d",arr[i]);
    }
}