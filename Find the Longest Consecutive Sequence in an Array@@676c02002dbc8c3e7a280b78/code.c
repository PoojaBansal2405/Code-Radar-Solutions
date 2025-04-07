#include<stdio.h>
int main(){
    int N,i,count=0;

    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
     int smallest=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
         }
     for(i=0;i<n;i++) {
       if(smallest+1==arr[i]){
         count++;
         smallest+=1;
       }
       }
       printf("%d",count);

}