
#include <stdio.h>
#include <stdlib.h>
int main(){
    int N,i,peak;
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
        peak=arr[0];
        break;
     }
    }
    if(i>0 && i<N-1)
    if(arr[i]>arr[i+1] && arr[i]>arr[i-1]){
       peak=arr[i];
        break;
    }
    
    if(i==N-1){
    if(arr[N-1]>arr[N-2]){
        peak=arr[N-1];
        break;
    }   
    }
    else{
        peak=-1;
    }
    

    
}
printf("%d",peak);
}
