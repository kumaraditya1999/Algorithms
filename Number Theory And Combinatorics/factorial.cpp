#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  
using namespace std;
 
const ll inf = 1e17;
const ll N = 1e6+10;
const ll bits = 30;
const ll mod = 1e9+7;

int fact[N];

void preprocess(){
    fact[0] = 1;

    for(int i=1;i<N;i++){
        fact[i] = (fact[i-1] * i)%mod;
    }
}

int main(){
    FASTIO;
    preprocess();

    int n;
    cin>>n;
    cout<<fact[n]<<"\n";

    
}