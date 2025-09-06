#include<stdio.h>
int absoluteNumber(int);
int main(){
    int num;
    printf("Enter Number : ");
    scanf("%d",&num);
    printf("Absolute Number of %d is %d\n",num, absoluteNumber(num));
    return 0;
}
int absoluteNumber(int n)
{
    if(n<0)
    {
        return -n;
    }else{
        return n;
    }
}