#include <stdio.h>
int main(){
    int n,i,j,k,sorted=1;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
        for(k=0;k<n-1;k++){
         if(arr[k+1]<arr[k]){
            sorted=0;
            break;
       }
    }
       if(sorted){
        printf("sorted");
    }
    else{
        printf("not sorted");
    }
}