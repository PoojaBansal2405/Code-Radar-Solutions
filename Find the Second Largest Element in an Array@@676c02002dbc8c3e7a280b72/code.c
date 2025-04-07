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
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    int slargest=largest;
    for(int k=0;k<n;k++){
        if(arr[i]>slargest && slargest<largest){
            slargest=largest;
        }
    }
    if(n==1){
        printf("%d",-1);
    }
    else{
        printf("%d",slargest);
    }

}