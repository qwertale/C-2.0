#include <stdio.h>
void main(){
    int Anahtar;
    int i;
    int n = 8;
    int Dizi[] = (9,8,7,6,5,4,3,2);
    for(int j = 1,j < Dizi.length,j++){
        Anahtar = Dizi[j];
        i = (j - 1);
        while(i >= 0 && Dizi[i] > Anahtar){
            Dizi[i + 1] = Dizi[i];
            i= (i + 1);
        }
        Dizi[i + 1]= Anahtar;
    }
}