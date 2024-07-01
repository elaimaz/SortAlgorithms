#include <iostream>

#include "MergeSort.h"

int main()
{
	int A[] = { 5, 1, 3, 10, 2, 3, 1, 9, 7, 4 };
	MergeSort(A, 0, 9);

	for(int i = 0; i < 10; i++)
	{
		std::cout << A[i] << std::endl;
	}

	std::cin.get();
	return 0;
}