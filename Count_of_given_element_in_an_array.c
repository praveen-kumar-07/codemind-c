#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int z,c=0;
    scanf("%d",&z);
    for(i=0;i<n;i++){
        if(arr[i]==z){
            c+=1;
        }
    }
    printf("%d",c);
}