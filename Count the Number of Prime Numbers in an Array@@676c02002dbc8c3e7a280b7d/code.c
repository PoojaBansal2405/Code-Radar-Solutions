#include<stdio.h>
int main(){
    int N,i;
    int count=0;
    
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<N;i++){
        if(arr[i]%i==0){
            count++;
        }
    }
    printf("%d",count);
}