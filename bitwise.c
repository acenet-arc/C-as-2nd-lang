#include <stdio.h>

int main()
{
    unsigned int b111 = 7u;
    unsigned int b001 = 1u;
    printf("0%o & 0%o == 0%o\n", b111, b001, b111 & b001);
    printf("0%o | 0%o == 0%o\n", b111, b001, b111 | b001);
    printf("0%o ^ 0%o == 0%o\n", b111, b001, b111 ^ b001);
    
    unsigned int b1111 = 0xf;
    unsigned int b0001 = 0x1;
    printf("0x%x & 0x%x == 0x%x\n", b1111, b0001, b1111 & b0001);
    printf("0x%x | 0x%x == 0x%x\n", b1111, b0001, b1111 | b0001);
    printf("0x%x ^ 0x%x == 0x%x\n", b1111, b0001, b1111 ^ b0001);
}
