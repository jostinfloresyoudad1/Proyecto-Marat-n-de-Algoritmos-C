#include <iostream>
using namespace std;
void selectionSort(int*a,int n){ for(int i=0;i<n-1;i++){ int mn=i; for(int j=i+1;j<n;j++) if(a[j]<a[mn]) mn=j; swap(a[i],a[mn]); } }
int main(){ int n; cin>>n; int*a=new int[n]; for(int i=0;i<n;i++) cin>>a[i]; selectionSort(a,n); for(int i=0;i<n;i++) cout<<a[i]<<" "; cout<<"
"; delete[] a; }
