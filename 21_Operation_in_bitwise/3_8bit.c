// Write a program to receive an 8-bit number into a variable and then
// check if its 3 rd and 5th bit are on. If these bits are found to be on
// then put them off.

#include <stdio.h>
#define _BV(x) (1 << x)
void showbits(unsigned char n);
int main()
{
    unsigned char a, b, c;
    unsigned int num;
    printf("Enter the number: ");
    scanf("%hu", &num);
    num &= 0x00FF;
    a = num;
    b = _BV(3) | _BV(5);
    c = a & ~b;
    showbits(a);
    printf("\n");
    showbits(c);
}

void showbits(unsigned char n)
{
    int i;
    unsigned char j, k, andmask;
    for (i = 7; i >= 0; i--)
    {
        j = i;
        andmask = 1 << j;
        k = n & andmask;
        k == 0 ? printf("0") : printf("1");
    }
}