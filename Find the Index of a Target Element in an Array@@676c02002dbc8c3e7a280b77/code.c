#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);

    for(int i=0;i<n;i++){
        if (arr[i]==target){
            printf("%d",i);
        }
        else if(!target){
            printf("%d",-1);
        }
    }
}