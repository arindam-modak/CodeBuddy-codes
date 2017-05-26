#include <bits/stdc++.h>
using namespace std;

struct str
{
    string x;
};

bool comp(str a, str b)
{
    return (a.x+b.x<b.x+a.x);
}
int main() {
	int b,i;
	cin>>b;
	str a[10001];
	for(i=0;i<b;i++) {
	    cin>>a[i].x;
	}
	sort(a,a+b,comp);
	for(i=0;i<b;i++) {
	    cout<<a[i].x;
	}
	return 0;
}
