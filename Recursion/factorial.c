// Non Recursive method
#include<stdio.h>
// Non Recursive method
int fact(int n){
    int i=1,f=1;
    for(i=1;i<=n;i++){
        f=f*i;
    }
    return(f);
}
//Recursive method
int factorial(int n){
    if(n==0){
        return 1;
    }
    else{
        return(n*factorial(n-1));
    }
}
int main(){
    int n;
    printf("Enter Value for factorial");
    scanf("%d",&n);
    if(n<0){
        printf("Invalid");
    }
    else{
        printf("Factorial is %d",factorial(n));
    }
}