#include <iostream>
#include <vector>
using namespace std;
 
vector<int> a;
vector<int> c;
void merge(int low, int high, int mid);
void mergesort(int low, int high)
{
 int mid;
 if (low < high)
 {
     mid=(low+high)/2;
     mergesort(low,mid);
     mergesort(mid+1,high);
     merge(low,high,mid);
 }
return ;
}
 
long long count ; 
void merge(int low, int high, int mid)
{
int i, j, k;
i = low;
k = low;
j = mid + 1;

while (i <= mid && j <= high)
{
    if (a[i] <= a[j])
    {
        c[k] = a[i];
        k++;
        i++;
    }
    else
    {
        c[k] = a[j];
        k++;
         j++;
         count += (long long)mid - (long long) i + 1L; 
     }
 }
while (i <= mid)
{
    c[k] = a[i];
    k++;
    i++;
}
while (j <= high)
{
    c[k] = a[j];
    k++;
    j++;
}
for (i = low; i < k; i++)
{
    a[i] = c[i];
 }
}
int main()
{

    int N;
    cin>>N;
    count =0;
    a.clear(); a.resize(N);
    c.clear(); c.resize(N);
    for (int i = 0; i < N; i++)
    {
        cin>>a[i];
    }
    mergesort(0, N-1);
 
    cout<<count<<"\n";

}
