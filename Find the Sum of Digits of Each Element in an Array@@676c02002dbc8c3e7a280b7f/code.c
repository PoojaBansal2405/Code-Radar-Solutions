#include<stdio.h>
int main(){
    int N,i,sum[N]=0;
    
    
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        while(arr[i]>0){
      arr[i]=arr[i]%10;
      sum[i]+=arr[i];
      arr[i]=arr[i]/10;
    }
    printf("%d",sum[i]);
    
    }
