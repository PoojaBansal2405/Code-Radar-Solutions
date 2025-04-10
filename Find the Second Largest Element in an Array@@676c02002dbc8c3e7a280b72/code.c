#include <stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }

    int largest=-1e9,slargest=-1e9;
    for(i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
        else if(arr[i]>slargest && arr[i]<largest){
            slargest=arr[i];
        }
    }
    if(slargest==-1e9){
        printf("-1");
    }
    else{
        printf("%d",slargest);
    }
}
