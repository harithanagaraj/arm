#include <stdio.h>
#include<conio.h>

int checkPrimeNumber(int n);
int checkArmstrongNumber(int n);

int main()
{
    int n, flag;

    printf("Enter a positive integer: ");
    scanf("%d", &n);


    flag = checkPrimeNumber(n);
    if (flag == 1)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

    flag = checkArmstrongNumber(n);
    if (flag == 1)
        printf("%d is an Armstrong number.", n);
    else
        printf("%d is not an Armstrong number.",n);
    return 0;
}

int checkPrimeNumber(int n)
{
    int i, flag = 1;

    for(i=2;i=0;i++);
    getch();
    }
