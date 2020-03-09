#include <stdio.h>
int tekorcift(int);
int main()
{
    printf("Sayi gir:");
    int sayi1;
    scanf("%d", &sayi1);
    printf("tekrar gir:");
    int sayi2;
    scanf("%d", &sayi2);
    if(sayi1 > sayi2)
        printf("buyuk olan %d ve %d", sayi1, tekorcift(sayi1));
    else
        printf("buyuk olan %d ve %d", sayi2, tekorcift(sayi2));
    return 0;
}
int tekorcift(int a)
{
    int 
    sonuc = 0;
    if(a % 2 == 0)
        sonuc = 0;
    else
        sonuc = 1;
    return sonuc;
}
