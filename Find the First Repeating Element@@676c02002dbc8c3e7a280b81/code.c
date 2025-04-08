#include<stdio.h>
int main(){
    int N,i,j,found;
     scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    
     for(i=0;i<N;i++){
    
        for(j=i+1;j<N;j++)
        if (arr[i]==arr[j]){
          printf("%d",arr[i]);
          found=1;
          break;
        }
        if(found){
            break;
        }
     }
     if(!found){
        printf("%d",-1);
     }
     }
