#include<stdio.h>
void sequentialsearch(int arr[],int n,int key){
    int i=0,found=0;
    for(i=0;i<n-1;i++){
        if(arr[i]==key){
            found=1;
            break;
        }
    }
    if(found==1){
        printf("Element found at position: %d",i+1);
    }
    else{
        printf("Element is not found.");
    }
}
int main(){
    int a[100],n,key;
    printf("enter total no of element\n");
    scanf("%d",&n);
    printf("enter no in array\n");
    for(int i=0;i<=n-1;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter key : ");
    scanf("%d",&key);
    sequentialsearch(a,n,key);

    }
