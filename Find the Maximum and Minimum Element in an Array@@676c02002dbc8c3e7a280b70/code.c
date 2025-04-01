#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d ",arr[i]);
    }
    int min=arr[0];
    int max=arr[n-1];
    for(int i=1;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    for(int i=0;i<n-1;i++){
if(arr[i]>max){
    max=arr[i];
}
    }

        

    }

    printf("%d %d ",min,max);
}