#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int visited[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int k=0;k<n;k++){
     visited[k]=0;
    }
    
    int count=0;
    for(int k=0;k<n;k++){
        if(visited[k]==1){
            continue;
        }

        int count=1;
        for(int j=k+1;j< n;j++){
            if(arr[j]==arr[k]){
                count++;
            }
            visited[j]=1;
        }
     printf("%d %d",arr[k],count);
     printf("\n");
        
    }
}