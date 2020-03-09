#include <stdio.h>

int main(void){
    int degisken = 20;
    int *sp;

    sp = &degisken;

    printf(" degiskenin adresi: %x\n", &degisken);

    printf("pointerin isaret ettigi adres: %x\n", &degisken );
    
    printf("pointerin isaret ettigi adresdeki sayi: %d\n", *sp);

    printf("pointerin kendi adresi: %x\n", &*sp);
    
    return 0;
}