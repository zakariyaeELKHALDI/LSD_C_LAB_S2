#include "header.h"

int iterative_fibo(int n)
{   
    int i=2;
    while i<=n
    {
        int F0= 0, F1= 1, F= 0;
            F= F1 + F0;
            F0= F1;
            F1= F;
            i+=1;
            iterative_fibo(i);
    }
    return F;
}
