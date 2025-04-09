#include<stdio.h>
int main(){
    int N,i,j;
    int count=0;
    
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<N;i++){
        for(int j=2;j<arr[i];j++){
            if(arr[i]==2){
                count++;
                i++;
            }
        else if(arr[i]%j!=0){
            
            count++;
            break;
        
         }
         
    }
    }
    printf("%d",count);

}