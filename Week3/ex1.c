#include <stdio.h>
int factorial(int n)
{
    if (n==1)
    {
        return 1;
    }
    return n*factorial(n-1);
}
int sum(int n)
{
    if (n==1)
    {
        return 1;
    }
    return n+sum(n-1);
}
int power(int n,int m)
{
    int product =1;
    while (m>=1)
    {
        product*=n;
        m-=1;
    }
    return product;
}
int main()
{
    int n,m;
    do
    {
        printf("Enter n: ");
        scanf("%d",&n);
        if (n<=0)
        {
            printf("N must be positive \n");
        }
    } while (n<=0);
    printf("\n");
    printf("F1(n) = %d\n\n",factorial(n));
    printf("F2(n) = %d\n\n",sum(n));
    printf("Enter m: ");
    scanf("%d",&m);
    printf("\n");
    printf("Result: %d",power(n,m));
}
