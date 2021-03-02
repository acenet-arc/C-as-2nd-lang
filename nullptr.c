#include <stdio.h>

int main()
{
    int *ip;
    ip = NULL;
    printf("Points to:     %x\n", ip);
    printf("Null pointer:  %d\n", *ip);
}
