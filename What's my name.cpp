#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,n,k,i;
	cin>>a;
	while(a--) {
	    cin>>n;
	    char arr[1001];
	    k=0;
	    while(n>0) {
	        if(n%26==0) {
	            arr[k++]='Z';
	            n--;
	            n=n/26;
	        }
	        else{
	            arr[k++]=(n%26)+64;
	            n=n/26;
	        }
	    }
	    for(i=k-1;i>=0;i--) {
	        cout<<arr[i];
	    }
	    cout<<endl;
	}

	return 0;
}
