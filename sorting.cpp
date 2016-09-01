#include<iostream>
using namespace std;

void merge ( int arr[], int l, int m, int r );

void mergerSort ( int arr[], int l, int r ) {
	if ( l < r ) {
		int mid = l + ( r - l ) / 2;
		mergerSort ( arr, l, mid );
		mergerSort ( arr, mid + 1, r );
		merge ( arr, l, mid, r );
	}
}

void merge ( int arr[], int l, int m, int r ) {
	int n1 = m - l + 1, n2 = r - m;
	int L[n1], R[n2];
	int i, j;
	for ( i = 0; i < n1; i++ )
		L[i] = arr[l + i];
	for ( j = 0; j < n2; j++ )
		R[j] = arr[m + 1 + j];
	int k = l;
	i = 0, j = 0;
	while ( i < n1 && j < n2 ) {
		if ( L[i] <= R[j] )
			arr[k++] = L[i++];
		else
			arr[k++] = R[j++];
	}
	while ( i < n1 ) {
		arr[k++] = L[i++];
	}
	while ( j < n2 ) {
		arr[k++] = R[j++];
	}
}

int main() {
	int size, choice;
	cout<<"Enter the sorting type you want ( 0 for bubble sort and default is merge sort:"<<endl;
	cin>>choice;
	cout<<"Enter the size of the array you want to sort:"<<endl;
	cin>>size;
	int* arr = new int[size];
	cout<<"Enter elements of the array:"<<endl;
	for ( int i = 0; i < size; i++ )
		cin>>arr[i];
	switch(choice) {
		case 0:
			for ( int i = 0; i < size - 1; i++ ) {
				for ( int j = 0; j < size - 1 - i; j++ ) {
					int temp;
					if ( arr[j] > arr[j + 1] ) {
						temp = arr[j];
						arr[j] = arr[j + 1];
						arr[j + 1] = temp;
					}
				}
			}
			break;
		default:
			mergerSort( arr, 0, size - 1 );
			break;
	}
	for ( int i = 0; i < size; i++ )
		cout<<arr[i]<<" ";
	return 0;
}