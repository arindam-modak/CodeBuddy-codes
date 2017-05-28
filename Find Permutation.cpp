#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int a,arr[1000],brr[2000],i,sum=0;
	cin>>a;
	for(i=0;i<a;i++) {
	    cin>>arr[i];
	}
	int k=0;
	sort(arr,arr+a);
	for(i=0;i<=a/2;i++) {
	   brr[k++]=arr[i];
	   if(i!=a/2)
	   brr[k++]=arr[a-i-1];
	   
	}
	for(i=0;i<k-1;i++) {
	    if(brr[i]>brr[i+1]) sum+=brr[i]-brr[i+1];
	    else sum+=brr[i+1]-brr[i];
	}
	cout<<sum;

	return 0;
}
