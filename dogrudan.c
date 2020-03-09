#include <stdio.h>
#include <math.h>

double func(double x){
    double fx = (x * x) - 5;
    return fx;
}

void main(){
    double x_a = 2;
    double x_u = 3;
    double fxa = func(x_a);
    double fxu = func(x_u);
    double x_r, fxr, old_r;
    double ea = 100;
    double Ea = 0.01;
    int i = 0;
    while(ea > Ea){
        x_r = (x_a + x_u)/2;
        fxr = func(x_r);
        if(i > 0){
            ea = fabs(x_r-old_r)/x_r * 100;
        }
        old_r = x_r;
        printf("%d. Xa = %f ; f(Xa) = %f ; Xu = %f ; f(Xu) = %f ;", i+1 ,x_a,fxa,x_u,fxu);
        if(fxa * fxr > 0){
            x_a = x_r;
            fxa = fxr;
        }else if(fxa * fxr < 0){
            x_u = x_r;
            fxu = fxr;
        }else{
            printf("Aranan değer bulundu. %d. iterasyonda : %f \n", i+1 ,x_r);
            break;
        }
        printf("Xr = %f ; f(Xr) = %f ; Bagil Hata = %f \n", x_r, fxr, ea);
        i++;
    }
}