#include <stdio.h>

void counting_sort(int A[], int k, int n)
{
    int i, j;
    int B[n], C[k+1];
 
    for (i = 0; i <= k+1; i++){
        C[i] = 0;
    }    
    for (j = 0; j < n; j++){
        C[A[j]] = C[A[j]] + 1;
    }    
    for (i = 1; i <= k + 1; i++){
        C[i] = C[i] + C[i-1];
    }
    for (j = n - 1; j >= 0; j--)
    {
        B[C[A[j]]-1] = A[j];
        C[A[j]] = C[A[j]] - 1;
    }
    
    printf("dizili dizi: ");
    for (i=0; i<n; i++)
        printf("%d ", B[i]);
}


int main()
{  
    int n = 8;
    int max = 9;
    int A[] = {3, 5, 7, 9, 1, 2, 4, 6};
    
    counting_sort(A, max, n);
    return 0;
   
}
