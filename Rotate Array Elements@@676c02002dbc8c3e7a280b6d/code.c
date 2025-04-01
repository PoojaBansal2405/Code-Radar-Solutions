#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    
    while(k>0){
        int temp=arr[n-1];
        for(int i=n-2;i>=0;i--){
            arr[i+1]=arr[i];
        }
        arr[0]=temp;
        k--;
    }
    for(int j=0;j<n;j++){
        printf("%d ",arr[j]);
    }
    printf("\n");
}
        
    
