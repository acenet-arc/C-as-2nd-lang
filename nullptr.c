#include <stdio.h>

int main()
{
    int *ip;
    int i = 1234;
    ip = &i;
    printf("Valid address: %p\n", ip);
    ip = NULL;
    printf("NULL address:  %p\n", ip);
    printf("Attempt to dereference follows...\n");
    printf("%d\n", *ip);
}
