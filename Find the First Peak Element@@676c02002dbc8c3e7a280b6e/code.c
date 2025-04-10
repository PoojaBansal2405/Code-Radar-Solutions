
#include <stdio.h>
#include <stdlib.h>
int main(){
    int N,i,element;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    if(arr[0]>arr[1]){
        printf("%d",arr[0]);
        
    }
    
    
    for(i=0;i<=N-1;i++ ){
    if(i==0){
         if(arr[0]>arr[1]){
        printf("%d",arr[0]);
        break;
     }
    }
    if(i>0 && i<N-1)
    if(arr[i]>arr[i+1] && arr[i]>arr[i-1]){
       element=arr[i];
        break;
    }
    
    if(i==N-1){
    if(arr[N-1]>arr[N-2]){
        printf("%d ",arr[N-1]);
        break;
    }   
    }
    
}}
