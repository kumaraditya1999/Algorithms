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

    vector< vector<ll> >arr(n+1,vector<ll>(2,0));
    ll val_sum = 0;
    for(int i=1;i<=n;i++){
        cin>>arr[i][0]>>arr[i][1];
        val_sum+=arr[i][1];
    }

    vector< ll >dp(val_sum+1,inf);

    ll ans = 0;
    dp[0] = 0;

    for(int i=1;i<=n;i++){
        for(int j=val_sum-arr[i][1];j>=0;j--){
            dp[j+arr[i][1]] = min(dp[j+arr[i][1]],dp[j]+arr[i][0]);
        }
    }

    for(int i=val_sum;i>=0;i--){
        if(dp[i]<=w){
            cout<<i<<"\n";
            return 0;
        }
    }

    cout<<ans<<"\n";
 
}
