#include <iostream>
using namespace std;

int main() {
	long long int n,b,c,a[1000],i;
	cin>>n;
	while(n--) {
	    cin>>b>>c;
	    for(i=1;i<=4*b;i++) a[i]=0;
	    for(i=1;i<=4*b;i++) {
	        if(c>0){
	            a[i]=1;
	            c--;
	        }
	    }
	    for(i=2*b+1;i<=4*b;i++) {
	        if(a[i]!=0) cout<<i<<" ";
	        if(a[i-2*b]!=0) cout<<i-2*b<<" ";
	    }
	    cout<<endl;
	}

	return 0;
}
