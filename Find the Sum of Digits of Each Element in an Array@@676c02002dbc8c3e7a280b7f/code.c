#include<stdio.h>
int main(){
    int N,i,rem;
     scanf("%d",&N);
    int sum[N];
    for(i=0;i<N;i++){
        sum[i]=0;
    }
    
   
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<N;i++){
        while(arr[i]>0){
      rem=arr[i]%10;
      sum[i]+=rem;
      arr[i]=arr[i]/10;
    }
   
    }
    for(i=0;i<N;i++){
    printf("%d\n",sum[i]);
    }
}
