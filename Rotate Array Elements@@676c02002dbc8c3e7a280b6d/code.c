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
        for(int i=0;i<arr[n-2];i++){
            arr[i+1]=arr[i];
        }
        temp=arr[0];
        k--;
    }
    for(int m=0;m<n;m++){
        printf("%d ",arr[m]);
    }
}
        
    
