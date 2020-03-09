#include <stdio.h>
int tekcift(int);
int asalmi(int);
int ebob(int , int );

int main() 
{
    int j;
    printf("bir sayi giriniz:");
    scanf("%d", &j);
    printf("%d\n",tekcift(j));

    int l;
    printf("bir sayi giriniz:");
    scanf("%d", &l);
    printf("%d\n",asalmi(l));

    int d;
    printf("bir sayi giriniz:");
    scanf("%d", &d);
    int z;
    printf("bir sayi  daha giriniz:");
    scanf("%d", &z);
    printf("%d",ebob(d,z));
    return 0;
}

int tekcift(int i)
{
    int kalan = 0;
    ( kalan = i % 2);
    return kalan;
}

int asalmi(int k)
{
    int kalan = 0;
    if(k % 7 == 0)
        kalan = 0;
    else if(k % 5 == 0)
        kalan = 0;
    else if(k % 3 == 0)
        kalan = 0;
    else if (k % 2 == 0)
        kalan = 0;
    else 
        kalan = 1;
    return kalan;
}

int ebob(int h, int o)
{
    int ebob = 0;
    int kucuk = 0;
    if( h < o)
        kucuk = h;
    else 
        kucuk = o;
    for(int s = 0; s <= kucuk; s++)
    {
        if(h % s == 0 && o % s == 0)
        ebob = s;
    }
    return ebob;
}
