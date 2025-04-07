#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int largest,slargest;
    for(int i=0;i<n;i++ ){
        scanf("%d",&arr[i]);
    }
    largest=arr[0];
    for(int j=1;j<n;j++){
        if(arr[j]>largest){
            largest=arr[j];
        }
    
   slargest=largest;
    
        if(arr[j]>slargest && arr[j]<largest){
            slargest=arr[j];
        }
    }
    if(n==1){
        printf("%d",-1);
    }
    else{
        printf("%d",slargest);
    }

}