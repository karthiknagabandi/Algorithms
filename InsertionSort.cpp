#include <iostream>
using namespace std;

void InsertionSort(int A[], int n)
{
	for(int i =1; i< n ; i++)
	{
		int value = A[i];
		int hole = i;
		while(hole > 0 && A[hole-1] > value)
		{	
			A[hole] = A[hole-1];
			hole = hole-1;
		}
		A[hole] = value;
	}
}

int main()
{
	int Array[] = {2,5,8,1,9,3};
	InsertionSort(Array, 6);
	for(int i =0; i< 6; i++)
	{
		cout << Array[i] << " ";
	}
	return 0;
}