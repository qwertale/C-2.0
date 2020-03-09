#include <stdio.h>

struct ogrenci{
    char isim[50];
    int sira;
    float puan;
} 
o[3];

int main(){
    int i;
    for(i = 0; i<3 ;i++){
        o[i].sira = i+1;
        printf("%d . ogrenci adini giriniz:" , i+1);
        scanf("%s" , o[i].isim);

        printf("%d . ogrenci puanini giriniz:" , i+1);
       scanf("%f" , o[i].puan);
   }
   for(i = 0; i<3 ; i++){
       printf("sira no: %d\n" , o[i].sira);
       printf("ogrenci adi: %s\n" , o[i].isim);
       printf("puan: %f\n" , o[i].puan);
   }
   return 0;
}