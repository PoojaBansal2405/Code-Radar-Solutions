#include<stdio.h>
int main(){
    int N,i,j,is;
     scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    
     for(i=0;i<N;i++){
        is=0;
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
