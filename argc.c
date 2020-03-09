#include <stdio.h>

void main(int argc, char **argv)
{
    int i;
    printf("girilen arguman sayisi:½d\n", argc);
    for(i = 0; i < argc; i++)
        printf("%s\n", argv[i]);

}
