#include<stdio.h>
int factorial();
int main(){
    int num;
    printf("Please enter the number:");
    scanf("%d", &num);
    printf("%d",factorial(num));
}
int factorial(int n){
    if(n==1){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}