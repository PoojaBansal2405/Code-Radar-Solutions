#include<stdio.h>
int main(){
    int N,i;
    int isPalindrome=1;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=N/2;i++){
     if(arr[i]!=arr[N-1-i]){
        isPalindrome=0;
     }
    }
    if(isPalindrome){
        printf("YES");
    }
    else{
        printf("NO");
    }
}