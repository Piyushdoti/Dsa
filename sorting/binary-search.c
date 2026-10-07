#include<stdio.h>

int binarysearch(int a[],int low ,int high,int x){
    while(low<=high){
        int mid=(low+high)/2;

        if(a[mid]==x)
            return mid;

        else if(a[mid]>x)
            high = mid - 1;

        else
            low = mid + 1;
    }
    return -1;
}

int main(){
    int a[100], n, key;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements (sorted): ");
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    printf("Enter key: ");
    scanf("%d", &key);

    int result = binarysearch(a, 0, n - 1, key);

    if(result == -1)
        printf("Unsuccessful search\n");
    else
        printf("Element found at index %d\n", result);

    return 0;
}
