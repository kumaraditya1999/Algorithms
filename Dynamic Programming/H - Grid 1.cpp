#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  
using namespace std;
 
const ll inf = 1e17;
const ll N = 1e5+10;
const ll bits = 30;
const ll mod = 1e9+7;

int main(){
    FASTIO;
    int h,w;
    cin>>h>>w;

    vector<string>arr(h);

    for(int i=0;i<h;i++){
        cin>>arr[i];
    }

    vector< vector<ll> >dp(h,vector<ll>(w));

    if(arr[0][0]!='#')
        dp[0][0] = 1;

    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if(arr[i][j]!='#'){
                if(j+1<w){
                    dp[i][j+1]+=dp[i][j];
                    dp[i][j+1]%=mod;
                }
                
                if(i+1<h){
                    dp[i+1][j]+=dp[i][j];
                    dp[i][j+1]%=mod;
                }
                
            }else{
                dp[i][j] = 0;
            }
            
        }
    }

    cout<<dp[h-1][w-1];
}
