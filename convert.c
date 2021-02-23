#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c2 = '2';
    char c9 = '9';

    /* char diff --- not encouraged! */
    printf("%c - %c evaluates to %d\n", c9, c2, c9-c2);

    /* BETTER: 
       Operate on strings (char *) not chars,
       and use library functions atoi() or atof() */
    int i14 = atoi("14");
    int i9 = atoi("9");
    printf("%d + %d = %d\n", i14, i9, i14+i9);
}

