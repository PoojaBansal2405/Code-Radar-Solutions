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
            if(arr[i]>arr[j]){
                element=arr[i];
                arr[i]=arr[j];
                arr[j]=element;
            }

        }
}
for(i=0;i<n;i++){
    printf("%d",arr[n-2]);
}
}