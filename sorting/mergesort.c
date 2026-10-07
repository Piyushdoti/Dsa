#include<stdio.h>
void merge(int arr[],int p,int q,int r){
    int n1=q-p+1;
    int n2=r-q;
    int l[n1],m[n2];
    for(int i=0;i<n1;i++){
        l[i]=arr[p+i];
    }
    for(int j=0;j<n2;j++){
        m[j]=arr[q+1+j];
    }
    int i,j,k;
    i=0;j=0;k=p;
    while(i<n1&&j<n2){
        if(l[i]<=m[j]){
            arr[k]=l[i];
            i++,k++;
        }
        else{
            arr[k]=m[j];
            j++,k++;
        }
    }
    while(i<n1){//if element in L array Remaining
        arr[k]=l[i];
        i++,k++;
    }
    while(j<n2){//if element in M array Remaining
        arr[k]=m[j];
        j++,k++;
    }

}
void mergesort(int arr[],int p,int r){
    if(p<r){
       int q=(p+r)/2;
       mergesort(arr,p,q);
       mergesort(arr,q+1,r);
       merge(arr,p,q,r);
    }
}
void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d\n",arr[i]);
    }
}
int main(){
    int arr[]={23,54,12,16,56,78,92,22};
    int size = sizeof(arr)/sizeof(arr[0]);
    mergesort(arr,0,size-1);
    printf("sorted array:\n");
    printarray(arr,size);
}