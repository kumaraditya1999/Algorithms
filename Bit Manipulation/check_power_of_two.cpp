#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;

    if(n && !(n & (n-1))){
        cout<<"Yes\n";
    }else{
        cout<<"No\n";
    }
}