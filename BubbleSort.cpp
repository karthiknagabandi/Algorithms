#include <iostream>
using namespace std;

void BubbleSort(int A[], int n)
{
	for(int i = 0; i< n ; i++)
	{
		int locPointer = i;
		int passFlag = 0;
		for(int j = i+1 ; j < n ; j++)
		{
			if(A[j] < A[i])
			{
				locPointer = j;
				int temp = A[i];
				A[i] = A[locPointer];
				A[locPointer] = temp;
				passFlag = 1;
			}
		}
		if(passFlag == 0)
		{
			return;
		}
	}
}

int main () 
{
	int Array[] = {2,7,8,5,9,1};
	BubbleSort(Array, 6);
	for(int i =0; i < 6 ; i++)
	{
	cout << Array[i] << " ";	
	}	
	return 0;
}