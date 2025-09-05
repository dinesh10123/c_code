#include<stdio.h>
int power(int, int);
int main(){
    int base, exponent;
    printf("Enter base : ");
    scanf("%d", &base);
    printf("Enter Exponent : ");
    scanf("%d",&exponent);
    printf("%d^%d = %d\n",base,exponent,power(base,exponent));
    return 0;
}
int power(int base, int exp)
{
    int result = 1;
    for(int i=1; i<=exp; i++)
    {
        result = result*base;
    }
    return result;
}