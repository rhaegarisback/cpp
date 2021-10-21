#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n=999999,i,j,s,x,o;
    for(i=100;i<=999;i++){
        for(j=100;j<=999;j++){
            s=j*i;
            ll k=s,c=0;
            ll m=1000000;
            while(k>0){
                c+=(k%10)*m;
                m/=10;
                k/=10;
            }
            if(c==s){
            if(s%11==0 &&s%121!=0) o=s;
            }
        }
    }
    cout<<o;
}