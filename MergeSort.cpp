//TODO: Fix Issues
#include <iostream>
using namespace std;

// #define ARRAY_SIZE(array) (sizeof((array))/sizeof((array[0]))

void Merge(int *A, int *left, int leftCount, int *right, int rightCount)
{	
	int i = 0,j = 0 ,k = 0;
	while(i < leftCount && j < rightCount)
	{
		if(left[i] < right[i])
			A[k++] = left[i++];
		else 
			A[k++] = right[i++];
	}
	while( i < leftCount)
	{
		A[k++] = left[i++];
	}
	while (j < rightCount)
	{
		A[k++] = right[j++];
	}
		
}

void MergeSort(int *A, int n)
{
	int mid = n / 2;
	if(n < 2) {return ;}
	int *Left[mid], *Right[n-mid];
	// int *Left = new int[mid];
	// int *Right = new int[n-mid]; 
	for(int i = 0 ; i< mid ; i ++)
	{
		 Left[i] = A[i];
		 cout << Left[i]; 	
	}
	for (int j = mid+1; j < n; j++)
	{
		Right[j] = A [j];
	}
	MergeSort(Left, mid);
	MergeSort(Right, n-mid);
	Merge(A, Left, mid, Right,n-mid);	
}



int main ()
{
	int Array[] = {2,7,4,8,3,9,1,5};
	int s1 = sizeof(Array);
	int s2 = sizeof(Array[0]);
	int sizeofArray = s1/s2;
	cout << sizeofArray << endl;
	MergeSort(Array, sizeofArray);
	for(int i = 0 ; i< 8 ; i++)
	{
		cout << Array[i] << " ";
	}	

	return 0;
}