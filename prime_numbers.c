#include <stdio.h>
int main ()
{
    int IsNotPrime;
    for (int i = 2; i <= 1000000; i++)
    {
        IsNotPrime = 0;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                IsNotPrime++;
            }
        }
        if (IsNotPrime == 0)
            printf("%d\n", i);
    }
}