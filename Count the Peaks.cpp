#include <iostream>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    int i,j;
    int a[n+2][m+2];
    for(i=0;i<=m+1;i++)
    {
        a[0][i]=-100002 ;
        a[n+1][i]=-100002;
    }
    for(i=0;i<=n+1;i++)
    {
    a[i][0]=-100002;
    a[i][m+1]=-100002;
    }
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            cin>>a[i][j];

    int c=0;

    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            if(a[i][j]>=a[i-1][j-1]&&a[i][j]>=a[i-1][j]&&a[i][j]>=a[i-1][j+1]&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i][j+1]&&a[i][j]>=a[i+1][j-1]&&a[i][j]>=a[i+1][j]&&a[i][j]>=a[i+1][j+1])
                c++;

    cout<<c;
    return 0;
    }
