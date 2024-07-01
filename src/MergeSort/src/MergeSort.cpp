#include <iostream>
#include <limits>

#include "MergeSort.h"

MergeSort::MergeSort(int A[], int p, int r)
{
    if(p < r)
    {   
        int q = (p + r) / 2;
        MergeSort(A, p, q);
        MergeSort(A, q + 1, r);
        Merge(A, p, q, r); 
    }
}

void MergeSort::Merge(int A[], int p, int q, int r)
{
    int n1 = q - p + 1;
    int n2 = r - q;

    int L[n1 + 1];
    int R[n2 + 1];

    for (int i = 0; i < n1; i++)
    {
        L[i] = A[p + i];
    }
    L[n1] = std::numeric_limits<int>::max();

    for(int i = 0; i < n2; i++)
    {
        R[i] = A[q + i + 1];
    }
    R[n2] = std::numeric_limits<int>::max();

    int i = 0;
    int j = 0;

    for (int k = p; k <= r; k++)
    {
        if(L[i] <= R[j])
        {
            A[k] = L[i];
            i++;
        }
        else
        {
            A[k] = R[j];
            j++;
        }
    }
}
