#include<stdio.h>
int main(){
    int N,i,j,temp;
     scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<N;i++)
    for(j=i+1;j<N;j++){
        if(arr[i]==0){
            temp=arr[i];
            arr[i]==arr[i+1];
            arr[N-1]=temp;
        }
    }
    for(i=0;i<N;i++){
    printf("%d ",arr[i]);
    }
}