#include <stdio.h>

int bar(int a, int b);
int main()
{
    int i;
    if(i = 19)
    {
        printf("sonuc :%d %d", bar(3, 5), i);
    }
    return 0;
}
int bar(int a, int b)
{
    return a + b;
}