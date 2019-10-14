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
    ll n,w;
    cin>>n>>w;

    vector< vector<ll> >dp(n+1,vector<ll>(w+1,0)),arr(n+1,vector<ll>(2,0));
    for(int i=1;i<=n;i++){
        cin>>arr[i][0]>>arr[i][1];
    }
 
    for(int i=1;i<=n;i++){
        for(int j=0;j<=w;j++){
            dp[i][j] = dp[i-1][j];
        }
        for(int j=0;j<=w && j+arr[i][0]<=w;j++){
            dp[i][j+arr[i][0]] = max({dp[i][j+arr[i][0]],dp[i-1][j]+arr[i][1]});
        }
    }

    ll ans =0;

    for(int i=0;i<=w;i++){
        ans = max(ans,dp[n][i]);
    }

    cout<<ans<<"\n";
   
}
