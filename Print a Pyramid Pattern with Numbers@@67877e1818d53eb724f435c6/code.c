#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for (int i=1; i<=N; i++){
        for (int j=1 ;j<=(2*N)-1; j++){
            if(j==N+i-1||j==N-(i-1)){
                printf("%d ", i);
            }
            else{
                printf(" ");
            }
        }
            printf("\n");
        

    }
    return 0;

}