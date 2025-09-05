#include<stdio.h>
int perfectNumber(int, int);
int main(){
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);

    int sum = perfectNumber(n, 1);

     if (sum == n && n != 0)
        printf("%d is a Perfect Number\n", n);
    else
        printf("%d is NOT a Perfect Number\n", n);

    return 0;
}

int perfectNumber(int num, int i){
 if (i == num)  
        return 0;
    if (num % i == 0)
        return i + perfectNumber(num, i + 1); 
    else
        return perfectNumber(num, i + 1);     
}

