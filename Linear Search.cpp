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
    int n;
    cin>>n;
    for(int i=0;i<n;i++) arr[i]=i;
    int target = 9999;
    int res = linearSearch(arr, target, n);    
    cout << "The result of linear search = " << res << endl;
    return 0;
}
