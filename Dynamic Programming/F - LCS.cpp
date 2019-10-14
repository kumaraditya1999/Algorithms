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
    string s,t;
    cin>>s>>t;
    int n1 = s.size(), n2 = t.size();

    vector< vector<int> >dp(n1+1,vector<int>(n2+1,0));

    for(int i=1;i<=n1;i++){
        for(int j=1;j<=n2;j++){
            if(s[i-1]==t[j-1]){
                dp[i][j] = dp[i-1][j-1]+1;
            }else{
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    
   int index = dp[n1][n2]; 
   char lcs[index+1]; 
   lcs[index] = '\0';
  
   int i = n1, j = n2; 
   while (i > 0 && j > 0) 
   { 
      if (s[i-1] == t[j-1]) 
      { 
          lcs[index-1] = s[i-1];
          i--; j--; index--;
      } 
      else if (dp[i-1][j] > dp[i][j-1]) 
         i--; 
      else
         j--; 
   } 
  
   cout << lcs;     
}
