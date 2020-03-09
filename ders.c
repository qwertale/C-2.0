#include <stdio.h>
int basamakbul(int);
int bin2dec(int a[], int b);
int usal(int);
int main()
{
    printf("Bir Sayi Giriniz:");
    int sayi;
    scanf("%d", &sayi);
    int boyut = (basamakbul(sayi));
    int dizi[boyut];
    int kalan, i = 0;
while(sayi != 0)
  {
    kalan = sayi % 2;
    dizi[i] = kalan;
    sayi = sayi / 2;
    i++;
  }
  int gecici[boyut];
  int k = 0;
  for(i = boyut - 1; i >= 0; i--)
  {
      gecici[k] = dizi[i];
      k++;
  }  
  printf("10 dan 2 ye donusuyor\n");
      for(k = 0; k < boyut; k++)
      printf("%d", gecici[k]);
      printf("2 den 10 a donusuyor\n");
       printf("%d", bin2dec(gecici,boyut));
    return 0;
}
int basamakbul(int sayi10)
{
   int basamak_sayisi = 0;
   while(sayi10 != 0)
   {
     sayi10 = sayi10 / 2;
     basamak_sayisi++;
   }
    return basamak_sayisi;
}
int usal(int kuvvet)
{
    int sonuc = 1;
    int i;
    for(i = 1; i <= kuvvet; i++)
        sonuc = sonuc * 2;
    return sonuc;
}
int bin2dec(int gelen[], int boyut)
{
    int sonuc = 0;
    int i = 0;
    int kuvvet = boyut - 1;
    for(i = 0; i < boyut; i++)
    {
        sonuc += usal(kuvvet) * gelen[i];
        kuvvet--;
    }
    return sonuc;
}