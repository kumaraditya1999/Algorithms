#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  
using namespace std;
 
const ll inf = 1e17;
const ll N = 2010;
const ll bits = 30;
const ll mod = 998244353;



int main(){
    FASTIO;
    ll n,k;
    cin>>n>>k;

    vector<ll>dp(n+1,inf),arr(n+1,0);

    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }

    dp[1] = 0;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=k && j+i<=n;j++){
            dp[i+j] = min(dp[i+j],dp[i]+abs(arr[i]-arr[i+j]));
        }
    }

    cout<<dp[n]<<"\n";
 
}
