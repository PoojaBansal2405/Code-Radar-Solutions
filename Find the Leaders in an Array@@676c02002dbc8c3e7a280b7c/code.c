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
                 printf("%d ",element); 
            }
            
        }
    }
    if(n==1){
        printf("%d ",arr[0]);
    }
   
    printf("%d",arr[n-1]);
}