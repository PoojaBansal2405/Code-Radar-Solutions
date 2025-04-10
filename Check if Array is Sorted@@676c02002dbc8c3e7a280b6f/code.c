#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
     int sorted=0;
    for(int j=0;j<n;j++){
        for(int k=0;k<n;k++){
            if(arr[k+1]>=arr[k]){
               sorted=1;
            }
            else{
                sorted=0;
            }

        }
    }
    if(sorted==1){
        printf("Sorted");
        }
    else{
        printf("Not Sorted");
    }
}