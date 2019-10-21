#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  
using namespace std;
 
const ll inf = 1e17;
const ll N = 1e6+10;
const ll bits = 30;
const ll mod = 1e9+7;

// bit tree range sum and point update ( zero indexed )
ll bit[N];

ll get(ll index){
    ll sum = 0;
    index = index + 1; 
    while (index>0) 
    {
        sum += bit[index];
        index -= index & (-index); 
    } 
    return sum;
}

void upd(ll index, ll val) 
{  
    index = index + 1; 
    while (index <= 2*N-1) 
    {
    bit[index] += val;
    index += index & (-index); 
    } 
} 

ll ask(ll l, ll r){

    return get(r)-get(l-1);
}


int main(){
    FASTIO;
}