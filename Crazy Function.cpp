 #include <bits/stdc++.h>
using namespace std;
long int f[10000001];
long int fact[10000001]={1};
void fact1(){
  
 long long int n = 1000000007;
 for(long long int j = 1 ; j <= 10000000 ; j++){
     fact[j]=(((fact[j-1])%n)*((j)%n))%n;
    }
 
}


int main() {
    std::ios::sync_with_stdio(false);
    fact1();
long long int n = 1000000007;
f[1] = 1;
 for( long int i = 2 ; i <=10000000 ; i++)
f[i] =( ((f[i-1] % n)*(fact[i])) % n );
int t;
cin >> t;
while(t--){
 long int N;
 cin >> N;
 cout << f[N] << endl;
}

 return 0;
}
