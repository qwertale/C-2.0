#include <stdio.h>

int bar(int a, int b);
int main()
{
    printf("sonuc :%d", bar (3, 5));
    return 0;
}
int bar(int a, int b)
{
    return a + b;
}