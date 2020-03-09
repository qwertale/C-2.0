#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

void merge(int A[], int p, int q, int r){
    int n1 = (q- p + 1);
    int n2 = (r - q);
    int L[n1 + 1];
    int R[n2 + 1];
    for(int i = 0; i < n1; i++)
    {
        L[i] = A[p + i];
    }
    for(int j = 0; j < n2; j++)
    {
        R[j] = A[q + j + 1];
    }
    L[n1] = R[n2 - 1] + 1;
    R[n2] = L[n1 - 1] + 1;
    int Linx = 0;
    int Rinx = 0;
    for(int k = p; k <= r; k++)
    {
        if(L[Linx] <= R[Rinx])
        {
            A[k] = L[Linx];
            Linx++;
        }else{
            A[k] = R[Rinx];
            Rinx++;
        }
    }
}
void mergesort(int A[], int p, int r){
    int  q;
    if(p < r)
    {
        q = (p + r) / 2;
        mergesort(A, p, q);
        mergesort(A, q + 1, r);
        merge(A, p, q, r);
    }
}
int main (){
    int fd;
    char buff[7], buff2[7];
    char *string = "a.txt";
    fd = open(string , O_RDONLY);
    read(fd, buff, 7);
    read(fd, buff2, 7);
    if (fd == -1)
    {
        perror(string);
        exit(1);
    }
    printf(buff);
    printf("\n");
    printf(buff2);
    
} 