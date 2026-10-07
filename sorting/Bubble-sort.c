#include<stdio.h>
void bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(){
    int n;
    printf(" enter no of total element\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter no to be sorted");
        scanf("%d",&arr[i]);
    }
    int s=sizeof(arr)/sizeof arr[0];
    bubblesort(arr,s);
    for(int i=0;i<s;i++){
        printf("sorted array%d\n",arr[i]);
    }
}