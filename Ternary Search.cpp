#include <iostream>
using namespace std;
int ternarySearch(int l, int r, int key, int ar[]) {
    if (r >= l) {
        int mid1 = l + (r - l) / 3;
        int mid2 = r - (r - l) / 3;
        if (ar[mid1] == key) {
            return mid1;
        }
        if (ar[mid2] == key) {
            return mid2;
        }
        if (key < ar[mid1]) {
            return ternarySearch(l, mid1 - 1, key, ar);
        }
        else if (key > ar[mid2]) {
            return ternarySearch(mid2 + 1, r, key, ar);
        }
        else {
            return ternarySearch(mid1 + 1, mid2 - 1, key, ar);
        }
    }
    return -1;
}
int main() {
    int ar[100000];
    int r;
    cin>>r;
    for(int i=0;i<r;i++) ar[i]=i;
    int l=0;
    int key = 99999;
    int p = ternarySearch(l, r, key, ar);
    if (p != -1)
        cout << "Phan tu duoc tim thay tai chi so : " << p << endl;
    else
        cout << "Phan tu khong ton tai trong mang." << endl;

    return 0;
}

