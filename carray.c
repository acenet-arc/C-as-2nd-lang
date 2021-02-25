// Solution to character array quiz

#include <stdio.h>

int main()
{
    char c[] = "123456789";
    if (c[9] == '0')  printf("c[9] == '0' is true\n");
    if (c[9] == '\0') printf("c[9] == '\\0' is true\n");
    if (c[9] == 9)    printf("c[9] == 9 is true\n");
    if (c[9] == '9')  printf("c[9] == '9' is true\n");
}
