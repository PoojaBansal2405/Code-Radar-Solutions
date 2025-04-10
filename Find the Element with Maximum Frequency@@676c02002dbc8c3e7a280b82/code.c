#include<stdio.h>
int main(){
    int n,i,largest,sol,index;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int freq[100]={0};
    for(i=0;i<n;i++){
        freq[arr[i]]++;
    }
largest=0;i=-1;
for(i=0;i<100;i++){
    if(freq[i]>largest){
        sol=i;
    }
}
printf("%d",sol);
}