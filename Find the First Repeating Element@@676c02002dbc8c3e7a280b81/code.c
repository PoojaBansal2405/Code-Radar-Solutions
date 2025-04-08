#include<stdio.h>
int main(){
    int N,i,j;
     scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int is=0;
     for(i=0;i<N;i++){
        for(j=i+1;j<N;j++)
        if (arr[i]==arr[j]){
          printf("%d",arr[i]);
          break;
        }
         
         else{
            is=1;
         }
     }
     if(is){
        printf("%d",-1);
     }
     }
