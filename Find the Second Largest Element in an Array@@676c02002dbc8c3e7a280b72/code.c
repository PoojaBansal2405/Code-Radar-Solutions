#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++ ){
        scanf("%d",&arr[i]);
    }
    int largest=arr[0];
    for(int j=1;j<n;j++){
        if(arr[j]>largest){
            largest=arr[j];
        }
    }
    int slargest=arr[0];
    for(int k=1;k<n;k++){
        if(arr[k]>slargest && slargest<largest){
            slargest=arr[k];
        }
    }
    if(n==1){
        printf("%d",-1);
    }
    else{
        printf("%d",slargest);
    }

}