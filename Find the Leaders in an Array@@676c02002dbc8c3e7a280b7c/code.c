#include<stdio.h>
int main(){
    int n,i,j,element;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>=arr[j]){
                element=arr[i];
            }
            }
        
    }
    if(n==1){
        printf("%d ",arr[0]);
    }
        printf("%d ",element);
   
    printf("%d",arr[n-1]);
}