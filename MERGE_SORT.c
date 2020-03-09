#include <stdio.h>
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
    int Lic = 0;
    int Ric = 0;
    for(int k = p; k <= r; k++)
    {
        if(L[Lic] <= R[Ric])
        {
            A[k] = L[Lic];
            Lic++;
        }else{
            A[k] = R[Ric];
            Ric++;
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
    int c = 8;
    int A[] = {3, 4, 7, 1, 6, 5, 9, 10};
    mergesort(A, 0, c - 1);

    for(int i = 0; i < c; i++)
    {
        printf("%d,", A[i]);
    }
    printf("\n");
}   