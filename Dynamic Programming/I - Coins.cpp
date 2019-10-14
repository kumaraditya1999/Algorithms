#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define PRECISION cout<<fixed; cout<<setprecision(20);
  
using namespace std;
 
const ll inf = 1e17;
const ll N = 3500;
const ll bits = 30;
const ll mod = 1e9+7;

ld dp[N][N];



int main(){
    FASTIO;
    PRECISION;
    
    ll n;
    cin>>n;
    vector<ld>arr(n+1);

    for(ll i=1;i<=n;i++){
        cin>>arr[i];
    }

    dp[0][0] = 1;

    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=i;j++){
            dp[i][j] += arr[i] * dp[i-1][j-1];
        }

        for(ll j=0;j<=i;j++){
            dp[i][j] += (1-arr[i]) * dp[i-1][j];
        }
    }

    ld sum = 0;

    for(ll i=(n+1)/2;i<=n;i++){
        sum+=dp[n][i];
    }

    cout<<sum<<"\n";

}
