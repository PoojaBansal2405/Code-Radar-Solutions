#include<stdio.h>
int main(){
    int n,i,largest,sol;
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
        sol=freq[arr[i]];
    }
}
printf("%d",sol);
}