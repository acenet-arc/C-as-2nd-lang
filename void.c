#include <stdio.h>

# Demonstrate minimally the use of the void return type and the
# void argument type.  Also that f() is equivalent to f(void).

void do_nothing(void) {
    ;
}

int main()
{
    do_nothing();
    printf("Hello\n");
}


