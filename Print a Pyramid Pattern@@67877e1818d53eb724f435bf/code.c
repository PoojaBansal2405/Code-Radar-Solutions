#include <stdio.h>
int main(){
    for(int i=0; i<n; i++){
        for(int j=0;j<=n-i; j++)
        {
            printf(" ");
        }
        for(int j=1;j<2n-1;j++){
            printf("*");
        }
    }
}