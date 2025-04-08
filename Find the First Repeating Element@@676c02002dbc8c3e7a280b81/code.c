#include<stdio.h>
int main(){
    int N,i,j;
     scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
     for(i=0;i<N;i++){
        for(j=i+1;j<n;j++)
        if (arr[i]==arr[j]){
          printf("%d",arr[i]);
          break;
        }
         }
         else{
            printf("%d",-1);
         }
     }
