#include <stdio.h>
#include <string.h>
// Demonstrate a null-terminated multibyte string
// with Chinese "Hello"
// (Source: https://en.cppreference.com/cpp/string/multibyte)
int main()
{
   char str[] = "\xe4\xbd\xa0\xe5\xba\xbd\0";
   printf("%s\n", str);
   printf("String is %ld bytes\n", strlen(str));
}
