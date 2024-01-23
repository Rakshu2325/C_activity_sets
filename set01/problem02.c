//2. Write a C program to add two numbers.
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    int sum;
    sum=a+b;
    printf("%d + %d = %d",a,b,sum);
    return 0;
}

