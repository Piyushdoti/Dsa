#include<stdio.h>
void toh(int n,char from,char aux,char to){
if(n==1){
    printf("move disk 1 from rod %c to rod %c",from,to);
    return;
}
toh(n-1,from,to,aux);
printf("\n move n %d from rod %c to rod %c",n,from,to);
toh(n-1,aux,from,to);
}
int main(){
    int n=3;//No of Disk
    toh(n,'A','B','C');//A B C are the name of rodes
    return 0;
}