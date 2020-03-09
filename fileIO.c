#include <stdio.h>

int main()
{
    FILE *fp1, *fp2;
    char ch;
    int pos;

    if ((fp1 = fopen("File_1.txt", "r")) == NULL)
    {
        printf("\ndosya acilamadi.");
        return -1;
    }
    else
    {
        printf("\nDosya kopyalamak icin acildi...\n");
    }
    fp2 = fopen("File_2.txt", "w");
    fseek(fp1, 0L, SEEK_END); // dosyanın sonu
    pos = ftell(fp1);
    fseek(fp1, 0L, SEEK_SET);  // dosyanın başı
    while (pos--)
    {
        ch = fgetc(fp1);
        fputc(ch, fp2);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}
