#include <stdio.h>
int main(){
    int N,i,j,element,count=0;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<N;i++){
        for(j=i+1;j<N;j++){
            if(arr[i]==arr[j]){
                element=arr[i];
             count+=1;
            }
        }}
    
        if(count>N/2+1){
            printf("%d",element);
        }
        else{
            printf("%d",-1);
        }
    
}