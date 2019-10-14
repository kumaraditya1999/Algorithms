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
    ll n;
    cin>>n;

    vector<ll>dp(n+1,inf),arr(n+1,0);

    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }

    dp[1] = 0;

    for(int i=1;i<=n;i++){
        if(i+1<=n){
            dp[i+1] = min(dp[i]+abs(arr[i]-arr[i+1]),dp[i+1]);
        }

        if(i+2<=n){
            dp[i+2] = min(dp[i]+abs(arr[i]-arr[i+2]),dp[i+2]);
        }
    }

    cout<<dp[n]<<"\n";
    
}
