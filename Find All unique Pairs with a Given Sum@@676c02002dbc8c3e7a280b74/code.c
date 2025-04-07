#include<stdio.h>
#include <limits.h>
int main(){
    int N,i,j,t;
    int count=0;
     scanf("%d",&N);
   int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&t);
    for(i=1;i<N;i++)
    for(j=1;j<N;j++){
        if(arr[i]+arr[i+j]==t){
            printf("%d %d\n",arr[i],arr[i+j]);
        }
    }}