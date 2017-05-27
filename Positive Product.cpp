#include <iostream>
using namespace std;

int main() {
	long long int a,i,arr[100002],brr[100002],k=0,l,j,r,p,pp,count,flag,max1,m1,m2;
	cin>>a;
	for(i=0;i<a;i++)
	{
	    cin>>arr[i];
	}
	j=0;
	max1=0;
	for(i=0;i<a;i++)
	{
	    count=0;
	        for(j=i+1;j<a;j++)
	        {
	            if(arr[j]==0) break;
	            if(arr[k]<0) count++;
	        }
	    if(count%2==0)
	    {
	        if((j-i-1)>max1) max1=j-i-1;
	    }
	    else
	    {
	        for(k=i+1;k<j;k++)
	        {
	            if(arr[k]<0) 
	            {
	                m1=k;
	                break;
	            }
	        }
	        for(k=j-1;k>=i+1;k--)
	        {
	            if(arr[k]<0)
	            {
	                m2=k;
	                break;
	            }
	        }
	        
	        if((m1-i)>(j-m2))
	        {
	            if((m1-i-1)>max1) max1=m1-i-1;
	        }
	        else
	        {
	            if((j-m2-1)>max1) max1=j-m2-1;
	        }
	    }
	    i=j;
	}
	if(max1<0) max1=0;
	cout<<max1;
	
	
	return 0;
}
