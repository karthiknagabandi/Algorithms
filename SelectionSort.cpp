#include <iostream>
using namespace std;

void SelectionSort (int A[], int n)
{
	for(int i = 0 ; i < n; i++)
		{
			int iMin = i;
			for(int j = i+1 ; j < n ; j++)
			{
				if (A[j] < A[i])
					iMin = j;
			}
			int temp = A[i];
			A[i] = A[iMin];
			A[iMin] = temp;
		}
}


int main()
{
	int Array[] = {2,4,7,3,9,1,5};
	SelectionSort (Array,6);
	for (int i = 0; i < 6 ; i++)
	{
		cout << Array[i] << " ";
	}
	return 0;
}