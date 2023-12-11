#include <iostream>
#include <cmath>
using namespace std;

int jumpSearch(int arr[], int x, int n) {
    int step = sqrt(n);
    int prev = 0;
    while (arr[min(step, n) - 1] < x) {
        prev = step;
        step += sqrt(n);
        if (prev >= n)
            return -1;
    }
    while (arr[prev] < x) {
        prev++;
        if (prev == min(step, n))
            return -1;
    }
    if (arr[prev] == x)
        return prev;

    return -1;
}

int main() {
    int arr[100000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++) arr[i]=i;
    int x = 9999;
    int index = jumpSearch(arr, x, n);

    if (index != -1)
        cout << "Phan tu " << x << " duoc tim thay tai chi so " << index << endl;
    else
        cout << "Phan tu khong ton tai trong mang." << endl;

    return 0;
}

