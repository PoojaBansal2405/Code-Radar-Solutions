#include<stdio.h>
int main(){
    int N,index;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);

    for(int i=0;i<N;i++){
        if (arr[i]==target){
             index=i;
        }
        else if(!target){
            printf("%d",-1);
        }
    }
    printf("%d",index);
}