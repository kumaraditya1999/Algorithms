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
    cin>>n;

    vector< vector<ll> >dp(n+1,vector<ll>(3,-inf)),arr(n+1,vector<ll>(3,0));
    dp[0][0]=dp[0][1]=dp[0][2] = 0;
    for(int i=1;i<=n;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                if(j!=k){
                    dp[i][j] = max(dp[i][j],dp[i-1][k]+arr[i][j]);
                }
            }
        }
    }

    cout<<max({dp[n][0],dp[n][1],dp[n][2]})<<"\n";
    
}
