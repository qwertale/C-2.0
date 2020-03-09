#include <stdio.h>

int main()
{
    printf("Bir Sayi Giriniz:\n");
    int a;
    int z = 2;
    scanf("%d" ,&a);
    z *= --a;
    printf("Girilen Sayi: %d %d", z, a);
    return 0;
}
