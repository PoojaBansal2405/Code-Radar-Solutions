#include<stdio.h>
int main(){
    int N,i,j;
     scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
     for(i=0;i<N;i++){
        for(j=1;j<N;j++){
        if (arr[i]==arr[i+j]){
          printf("%d",arr[i]);
          break;
        }
        }
     }
}