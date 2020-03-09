#include <stdio.h>

int main()
{
    int a;
    printf("Bir Sayi Giriniz:\n");
    scanf("%d" ,&a);
    int b;
    printf("Bir Sayi Daha Giriniz:\n");
     scanf("%d" ,&b);
    printf("Elde Edilen Sayi: %d", a + b );
    return 0;
}