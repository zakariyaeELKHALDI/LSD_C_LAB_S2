#include "header.h"

int iterative_fibo(int n)
{
    int F0 = 0, F1 = 1, F;
    for (int i=2; i<=n; ++i)
    {
        F= F1 + F0;
        F0= F1;
        F1= F;
    }
    return F;
}
