#include <iostream>
using namespace std;
int InterpolationSearch( int arr[], int n, int x)
{
	int l=0, r=n-1;
	while (l<=r && arr[l]<=x && arr[r]>=x)
	{
		if(l==r)
		{
			if(arr[l]==x)
				return l;
			return -1;
		}
		int tg= l + (((double) (r-l) / (arr[r]-arr[i])) * (x - l));
		if(arr[tg]==x)
			return tg;
		if(arr[tg]<x)
			l = tg + 1;
		if(arr[tg]>x)
			r = tg - 1;
	}
	return -1;
}
int main()
{
	int n;
	cout<<"nhap so phan tu cua mang ";
	cin>>n;
	int arr[100000];
	for(int i=0;i<n;i++)
		arr[i]=i+1;
	int x;
	cout<<"nhap gia tri can tim ";
	cin>>x;
	int tg=InterpolationSearch(arr, n, x);
	if(tg==-1) cout<<"phan tu can tim khong o trong mang";
	else cout<<"phan tu can tim o vi tri thu "<<tg+1;
	return 0;
}
