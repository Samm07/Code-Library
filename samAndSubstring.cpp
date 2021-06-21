#include<iostream>

#define lli long long int 
#define MOD 1000000007

using namespace std;

int main(){
    lli res,f,i;
    string s;
    cin>>s;
    lli l = s.length();
    res = 0;
    f = 1;
    for(int i = l-1; i >= 0; i--) {
        res = (res + (s[i]-'0')*f*(i+1)) % MOD;
        f = (f*10+1) % MOD;
    }
    cout<<res;
    return 0;
}
