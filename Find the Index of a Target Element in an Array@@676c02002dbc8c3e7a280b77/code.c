#include<stdio.h>
int main(){
    int N,index,notfound;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);
     
    for(int i=0;i<N;i++){
        notfound=0;
        if (arr[i]==target){
             printf("%d",i);
             break;
        }
        else{
            notfound=1;
        }
    }
    if(notfound){
        printf("%d",-1);
    }
    
}