#include <bits/stdc++.h>
using namespace std;

struct points
	{
	    int x;
	    int y;
	};
	
bool comp(points c,points d) {
    
    if(c.x==d.x) return (c.y>d.y);
    return (c.x<d.x);
}
	
int main() {
    long long int e,b,i;
    double d;
    cin>>e;
    points a[1001];
    while(e--){
        d=0;
        cin>>b;
	    
	    for(i=0;i<b;i++) {
	        cin>>a[i].x;
	        cin>>a[i].y;
	    }
	    sort(a,a+b,comp);
	    for(i=0;i<b-1;i++) {
	        d+=sqrt((a[i].x-a[i+1].x)*(a[i].x-a[i+1].x)+(a[i].y-a[i+1].y)*(a[i].y-a[i+1].y));
	    }
	    printf("%.2lf\n",d);
    }
	return 0;
}
