#include <stdio.h>

int main()
{
    int a, n, m;
    n = m = 0;
    a = 3 * ( m = n+2 );
    printf("a == %d, m == %d, n == %d \n", a,m,n);
}

