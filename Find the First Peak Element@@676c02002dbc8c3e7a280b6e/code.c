#include <stdio.h>
int main(){
    int N,i;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    if(arr[0]>arr[1]){
        printf("%d",arr[0]);
        break;
    }
    for(i=1;i<N-1;i++){
    
    
    else if(arr[i]>arr[i+1] && arr[i]>arr[i-1]){
        printf("%d",arr[i]);
        break;
    }
    }

    else if(arr[N-1]>arr[N-2]){
        printf("%d",arr[N]);
        break;
    }
    
}
