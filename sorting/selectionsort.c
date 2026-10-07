#include<stdio.h>
void selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

            }
        }
    }
}
int main(){
    int arr[]={5,3,2,1,67,8};
    int n =sizeof(arr)/sizeof(arr[0]);
    selectionsort(arr,n);
    printf("sorted array\n");
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}