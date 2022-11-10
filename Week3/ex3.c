#include <stdio.h>
int main()
{
    printf("\n");
    for (int i = 3; i < 17; i++)
    {
        printf("-");
    }
    printf("Multiplication Tables");
    for (int i = 3; i < 17; i++)
    {
        printf("-");
    }
    printf("\n");
    int i = 1;
    printf("%c",  201);
    for (int i = 0; i < 47; i++)
    {
        if ((i == 15) || (i == 31))
        {
            printf("%c", 203);
        }
        else
            printf("%c", 205);
    }
    printf("%c\n", 187);
    do
    {
        
        for (int j = 1; j <= 10; j++)
        {
            printf("%c  %d x %-2d = %-3d %c  %d x %-2d = %-3d %c  %d x %-2d = %-3d %c\n",  186, i, j, i * j, 186, i + 1, j, (i + 1) * j, 186, (i + 2), j, (i + 2) * j, 186);
        }
        i = i + 3;
        if(i<10)
        {   
            printf("%c",  204);
            for (int i = 0; i < 47; i++)
            {
                if ((i == 15) || (i == 31))
                {
                    printf("%c", 206);
                }
                else
                    printf("%c", 205);
            }
            printf("%c\n", 185);
        }
        else
        {
            printf("%c",200);
            for (int i = 0; i < 47; i++)
            {
                if ((i == 15) || (i == 31))
                {
                    printf("%c", 202);
                }
                else
                    printf("%c", 205);
            }
            printf("%c\n", 188);
        }
        
        
    } while (i <= 9);
    
}
