#include <bits/stdc++.h>
using namespace std;

int arr[10000002],brr[10000002],crr[10000002];
void seive()
{
    int i,j;
    arr[0]=arr[1]=0;
    for(i=2; i<=10000000; i++)
    {
        arr[i]=1;
    }
    for(i = 2; i*i <= 10000000; i++) {
        if(arr[i] == 1) {
            for(j = i*i; j <= 10000000; j = j+i)
                arr[j] = 0;
        }
    }
    
}

int main() 
{
	seive();
	int n,i,z,x,y,p,q,t;
	
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
			scanf("%d", &crr[i]);
			if(arr[crr[i]] == 1)
			{
				brr[i]=brr[i-1]+1;
			}
			else{
				brr[i]=brr[i-1];
			}
	}
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &z);
		if(z==0)
		{
			scanf("%d %d", &x, &y);
			if(arr[crr[x]] == 0 && arr[y] == 1)
			{
				for(i=x; i<=n; i++)
				{
					brr[i] += 1;
				}
				crr[x]=y;
			}
			else if(arr[crr[x]] == 1 && arr[y] == 0)
			{
				for(i=x; i<=n; i++)
				{
					brr[i] -= 1;
				}
				crr[x]=y;
			}
			else{
				crr[x]=y;
			}
		}
		else{
			scanf("%d %d", &p, &q);
			printf("%d\n", brr[q]-brr[p-1]);
		}
	}
    return 0;
}
