#include <iostream> 
using namespace std;
int min(int x, int y) { return (x <= y) ? x : y; } 
int fibMonaccianSearch(int arr[], int x, int n) 
{ 
	int fibMMm2 = 0; // (m-2)'th Fibonacci No. 
	int fibMMm1 = 1; // (m-1)'th Fibonacci No. 
	while (fibM < n) { 
		fibMMm2 = fibMMm1; 
		fibMMm1 = fibM; 
		fibM = fibMMm2 + fibMMm1; 
	}
	int offset = -1; 
	while (fibM > 1) { 
		int i = min(offset + fibMMm2, n - 1);
		if (arr[i] < x) { 
			fibM = fibMMm1; 
			fibMMm1 = fibMMm2; 
			fibMMm2 = fibM - fibMMm1; 
			offset = i; 
		} 
		else if (arr[i] > x) { 
			fibM = fibMMm2; 
			fibMMm1 = fibMMm1 - fibMMm2; 
			fibMMm2 = fibM - fibMMm1; 
		} 
		else
			return i; 
	} 

	if (fibMMm1 && arr[offset + 1] == x) 
		return offset + 1; 
	return -1; 
} 
int main() 
{ 
	int arr[100000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++) arr[i]=i; 
	int x ; 
	cin>>x;
	int ind = fibMonaccianSearch(arr, x, n); 
	if(ind>=0) 
		cout << "Phan tu can tim o vi tri thu: " << ind; 
	else
		cout << x << " khong co trong mang"; 
	return 0; 
} 

