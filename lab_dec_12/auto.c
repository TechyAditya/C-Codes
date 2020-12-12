// auto storage class
#include <stdio.h>

void fn1()
{
    int b = 20;
    printf("Fn1: %d \n", b);
}

void fn2()
{
    int b = 30;
    fn1();
    printf("Fn2: %d \n", b);
}

int main()
{
    auto int a = 1;

    {
        {
            auto int a = 2;

            {
                auto int a = 3;
                printf("Block 3: %d \n", a);
            }
            printf("Block 2: %d \n", a);
        }
        printf("Block 1 : %d \n", a);
    }

    int b = 10;
    fn2();
    printf("Main: %d \n", b);
    return 0;
}