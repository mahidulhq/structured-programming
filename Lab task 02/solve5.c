// Calculate the factorial of a number

#include<stdio.h>
int main() {
    int n,f=1;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        f *= i;
    }

    printf("%d\n",f);
    return 0;
}


