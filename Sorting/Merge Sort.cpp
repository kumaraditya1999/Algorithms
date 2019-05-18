#include <iostream>
 
using namespace std;
 
// A function to merge the two half into a sorted data.
void Merge(int *a, int l, int r, int mid)
{
	// We have l to mid and mid+1 to r already sorted.
	int i, j, k, temp[r-l+1];
	i = l;
	k = 0;
	j = mid + 1;
 
	// Merge the two parts into temp[].
	while (i <= mid && j <= r)
	{
		if (a[i] < a[j])
		{
			temp[k] = a[i];
			k++;
			i++;
		}
		else
		{
			temp[k] = a[j];
			k++;
			j++;
		}
	}
 
	// Insert all the remaining values from i to mid into temp[].
	while (i <= mid)
	{
		temp[k] = a[i];
		k++;
		i++;
	}
 
	// Insert all the remaining values from j to r into temp[].
	while (j <= r)
	{
		temp[k] = a[j];
		k++;
		j++;
	}
 
 
	// Assign sorted data stored in temp[] to a[].
	for (i = l; i <= r; i++)
	{
		a[i] = temp[i-l];
	}
}
 
// A function to split array into two parts.
void MergeSort(int *a, int l, int r)
{
	int mid;
	if (l < r)
	{
		mid=(l+r)/2;
		// Split the data into two half.
		MergeSort(a, l, mid);
		MergeSort(a, mid+1, r);
 
		// Merge them to get sorted output.
		Merge(a, l, r, mid);
	}
}
 
int main()
{
	int n, i;
	cout<<"\nEnter the number of data element to be sorted: ";
	cin>>n;
 
	int arr[n];
	for(i = 0; i < n; i++)
	{
		cout<<"Enter element "<<i+1<<": ";
		cin>>arr[i];
	}
 
	MergeSort(arr, 0, n-1);
 
	// Printing the sorted data.
	cout<<"\nSorted Data ";
	for (i = 0; i < n; i++)
        cout<<" "<<arr[i];
 
	return 0;
}
