#include<stdio.h>
int main(){
    int N;
    char c;
    scanf("%d",&N);
    for (int i=1; i<=N; i++){
        for(j=1; j<=i; j++){
            printf("%c",'A'+j);
        }
        printf("\n");
    }
    return 0;
}