#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
const ll N = 5e6+10;
const ll inf = 1e18;
 
using namespace std;

// segment tree node

struct node{
   ll ps,ss,ts,ms;
};

node tree[4*N], inv;
ll arr[N]; 

// debug function
void prll(node a){
   cout<<a.ss<<" "<<a.ps<<" "<<a.ts<<" "<<a.ms<<"\n";
}
 

node merge(node left,node right){

    // merge function to be completed 
}

node create(ll val){
   node par;
   
    // create a new node

   return par;
}

void build(ll ss,ll se,ll si){
 
    if(ss==se){
        tree[si] = create(arr[ss]);    
        return;
    }
 
    ll mid = (ss+se)/2;
 
    build(ss,mid,2*si+1);
    build(mid+1,se,2*si+2);
 
    tree[si] = merge(tree[2*si+1],tree[2*si+2]);

    return;
}

 
node query(ll qs,ll qe,ll ss,ll se,ll si){

 
    if(qs>se || qe<ss || qs>qe || ss>se){
        // invalid segment
       return inv;
    }

    if(ss>=qs && se<=qe){
        // completly inside segment
       return tree[si];
    }

    ll mid = (se-ss)/2 + ss;

    node left = query(qs,qe,ss,mid,2*si+1);
    node right = query(qs,qe,mid+1,se,2*si+2);

   node ans = merge(left,right);

   return ans;
}

void initInv(){
    // This initializes the
    // null node returned when invalid segment is found
    

}

 
 
int main(){

   initInv();

   FASTIO;

   ll n;
   cin>>n;

   for(ll i=0;i<n;i++){
      cin>>arr[i];
   }

   build(0,n-1,0);

//    query(l,r,0,n-1,0)

 
}