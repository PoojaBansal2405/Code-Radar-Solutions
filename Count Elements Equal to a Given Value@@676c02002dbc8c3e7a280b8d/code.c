#include<stdio.h>
#include <limits.h>
int main(){
    int N,i,k;
    int count=0;
     scanf("%d",&N);
     scanf("%d",&k);
     
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<N;i++){
        if(arr[i]==k){
            count++;
        }
    }
    printf("%d",count);
}
