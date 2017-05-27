#include<bits/stdc++.h>
using namespace std;

long long int a[10000007];
long long int tree[4000000];
bool p[10000007];
void sieve()
{
    long long int i,j;
    p[0]=true;              
    p[1]=true;
    for(i=2;i*i<=10000000;i++)
    {
        if(!p[i]){
            for(j=i*i;j<=10000000;j=j+i)
                p[j]=true;
        }
    }
}

void build(long long int low,long long int high,long long int pos)
{
    if(low==high)
    {
        if(!p[a[low]])
            tree[pos]=1;
        else
            tree[pos]=0;
    }
    else
    {
        long long int mid=(low+high)/2;
        build(low,mid,2*pos+1);
        build(mid+1,high,2*pos+2);
        tree[pos]=tree[2*pos+1]+tree[2*pos+2];
    }
}

void update(int start, int end, int node, int idx, int val)
{
    if(start == end)
    {
        if(!p[val])
            tree[node]=1;
        else
            tree[node]=0;
        a[idx] = val;
    }
    else
    {
        int mid = (start + end) / 2;
        if(start <= idx && idx <= mid)
        {
            update(start, mid,2*node+1, idx, val);
        }
        else
        {

            update(mid+1, end,2*node+2, idx, val);
        }

        tree[node] = tree[2*node+1] + tree[2*node+2];
    }
}

int query(int start, int end, int l, int r, int node)
{
    if(r < start || end < l)
    {
        return 0;
    }
    if(l <= start and end <= r)
    {
        return tree[node];
    }
    int mid = (start + end) / 2;
    int p1 = query(start, mid, l, r, 2*node+1);
    int p2 = query(mid+1, end, l, r, 2*node+2);
    return (p1 + p2);
}

int main()
{
    sieve();
    long long int n,i,q,c,l,r;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
   build(0,n-1,0);
   cin>>q;
   while(q--)
   {
       cin>>c>>l>>r;
        if(c==1)
        {
           l--;
           r--;
           cout<<query(0,n-1,l,r,0)<<"\n";
        }
        else
        {
            l--;
            update(0,n-1,0,l,r);
        }
   }
   return 0;
}
