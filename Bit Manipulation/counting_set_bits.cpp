#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;

    int cnt = 0;

    while(n){
        if(n&1) cnt++;
        n>>=1;
    }

    cout<<"There are :"<<cnt<<" set bits in "<<n<<"\n";
}