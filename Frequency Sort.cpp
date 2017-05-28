#include <bits/stdc++.h>
using namespace std;
typedef multimap<int, int> MapType;

int main()
{
	int a[1000];
	int i;
	int N;
	cin>>N;
	for (i=0;i<N;i++) {
	    cin>>a[i];
	}
	
	map<int,int> mp;
    
	for(i=0;i<N;i++)
	{
		if(mp.find(a[i])!=mp.end())			
			mp[a[i]]++;
		else
			mp[a[i]]=1; 
	}
    
	
	multimap<int,int> mp2;
    
	map<int,int>::iterator it;
    
	for(it=mp.begin();it!=mp.end();it++)
	{
		
		mp2.insert(multimap<int, int>::value_type(it->second,it->first)); 
	}  
	
	map<int,int>::iterator itr;
    
	for(itr=mp2.begin();itr!=mp2.end();itr++)
	{
	
		
			cout<<itr->second<<" ";
	
	}
    
	return 0;
}
