#include <iostream>
using namespace std;
int binarySearch(int arr[], int l, int r, int x) {
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}

int main(void) {
    int arr[100000];
    int n=100000;
    for(int i=0;i<n;i++) arr[i]=i;
    int x;
    cout<<"nhap gia tri can tim: ";
    cin>>x;
    int result = binarySearch(arr, 0, n - 1, x);
    if(result == -1)
        cout << "Phan tu khong ton tai trong mang";
    else
        cout << "Phan tu duoc tim thay tai chi so: " << result;
    return 0;
}

