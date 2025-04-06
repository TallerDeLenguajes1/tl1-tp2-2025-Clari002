#include <stdio.h>
#include <stdlib.h>
#define N 20

int main()
{
    int i;
    double vt[N];
    double *p;
    for (p = vt; p < vt+N; p++)
    {
        *p = 1+rand() %100;
    }
    
    for ( p = vt; p < vt+N; p++)
    {
        printf("%f  ",*p);
    }
    
    return 0;
}