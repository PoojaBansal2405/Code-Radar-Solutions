#include <stdio.h>
int main(){
    int N,i,j,element=-1,count=0;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<N;i++){
        count=0;
        for(j=0;j<N;j++){
            if(arr[i]==arr[j]){
                
             count++;
            }
        }
         if(count>(N/2)){
            element=arr[i];
            break;
        }
        }
    
       
        if(element!=-1){
            printf("%d",element);
        }


        else{
            printf("%d",-1);
        }
    return 0;
}