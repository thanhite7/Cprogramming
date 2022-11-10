#include <stdio.h>
#include <math.h>

int fun(int n)
{
    if(n==1)
    {
        return 0;
    }
    else if (n==2 || n==3)
    {
        return 1;
    }
    else
    {
        for(int i=2;i<sqrt(n);i++)
        {
            if (n%i==0)
            {
                return 0;
            }
        }
        return 1;
    }
}

int foo(int c)
{
    int n=0,sum=0;
    while(sum<c)
    {
        n+=1;
        sum+=n;
        if (c==sum)
        {return n;}
    }
    return n-1;
}

int main()
{
    printf("fun(1) = %d\n", fun(1));
    printf("fun(2) = %d\n", fun(2));
    printf("fun(5) = %d\n", fun(5));
    printf("fun(6) = %d\n", fun(6));
    printf("\n");
    printf("foo(9) = %d\n", foo(9));
    printf("foo(10) = %d\n", foo(10));
    printf("foo(11) = %d\n", foo(11));
}
