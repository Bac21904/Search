#include <iostream>
using namespace std;
int linearSearch(int arr[], int target, int n) 
{
    for( int i = 0; i < n; i++ ) {
        if ( arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() 
{
    int arr[100000];
    int n=100000;
    for(int i=0;i<n;i++) arr[i]=i;
    int target;
    cout<<"Nhap gia tri can tim: ";
    cin>>target;
    int res = linearSearch(arr, target, n);    
    cout << "Phan tu can tim o vi tri so: " << res << endl;
    return 0;
}
