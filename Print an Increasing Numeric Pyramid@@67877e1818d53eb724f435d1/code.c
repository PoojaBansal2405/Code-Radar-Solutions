#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1 ;i<=n; i++){
        for (int j=1; j<=2n-1 ;j++){
            for (int k=n-(i-1); k<n+(i-1);n+=2){
                printf("%d",j);
            }
            
        }
        printf("\n");
    }

}