#include <stdio.h>
int add(int a, int b);

int main()
{
    int a, b, sum;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    printf("enter the value of b\n");
    scanf("%d", &b);
    sum=add(a,b);
    printf("sum is %d\n",sum);
    return 0;
}

int add(int a, int b)
{
    int sum;
    sum=a+b;
    return sum;
}