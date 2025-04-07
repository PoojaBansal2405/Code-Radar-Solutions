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
        int notfound=false;
        if (arr[i]==target){
             printf("%d",i);
             break;
        }
        else{
            notfound=true;
        }
    }
    if(notfound){
        printf("%d",-1);
    }
    
}