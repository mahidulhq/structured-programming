#include<stdio.h>

int main()
{
    int n;
    printf("Enter your number: ");
    scanf("%d",&n);
    int last_digit = n%10;

    printf("Last digit number is : %d\n", last_digit);

    return 0;
}
