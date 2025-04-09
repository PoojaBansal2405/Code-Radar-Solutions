#include<stdio.h>
int main(){
    int n,i,j,element,result=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    if(n==2){
        printf("-1");
    }


    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                element=arr[i];
                arr[i]=arr[j];
                arr[j]=element;
            }
            else if(arr[i]==arr[j]){
                result=1;
            }

        }
}

    printf("%d",arr[n-2]);
    if(result){
        printf("-1");
    }
    

}