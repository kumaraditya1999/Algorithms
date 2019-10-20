#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  
using namespace std;
 
const ll inf = 1e17;
const ll N = 1e6+10;
const ll bits = 30;
const ll mod = 1e9+7;


// calculates x^n in logn
ll power(ll x, ll n){

    if(n==0){
        return 1;
    }

    x%=mod;

    ll ans = power(x,n/2);
    ans*=ans;
    ans%=mod;

    if(n%2){
        ans*=x;
        ans%=mod;
    }

    return ans;
}


int main(){
    FASTIO;

    ll x, n;

    cin>>x>>n;

    cout<<power(x,n);
}