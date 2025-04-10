#include<stdio.h>
int main(){
    int n,largest;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int freq[100]={0};
    for(i=0;i<n;i++){
        freq[arr[i]]++;
    }
largest=arr[0];
for(i=0;i<100;i++){
    if(arr[i]>largest){
        printf("%d",freq[i]);
    }
}
}