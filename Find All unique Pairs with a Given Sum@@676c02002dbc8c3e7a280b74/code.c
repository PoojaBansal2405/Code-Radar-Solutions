#include<stdio.h>
#include <limits.h>
int main(){
    int N,i,j,t;
    
     scanf("%d",&N);
   int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&t);
    for(i=0;i<N;i++){
    for(j=1;j<N;j++){
        while(i!=j){
        if(arr[i]+arr[j]==t){
            printf("%d %d\n",arr[i],arr[j]);
        }
    }
    }
    }
    }