#include<stdio.h>
int MaxNumber(int, int);
int main(){
    int a,b;
    printf("Enter First Number :");
    scanf("%d",&a);
    printf("Enter Second Number :");
    scanf("%d",&b);
    int Max = MaxNumber(a, b);
    printf("Maximum Number is : %d\n",Max);
   
}
int  MaxNumber(int x, int y){
    if(x>y)
        return x;
    else
        return y;
}