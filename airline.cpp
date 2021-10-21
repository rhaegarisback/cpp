#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a,b,c,d,e,t;
    cin>>t;
    while(t--){
        cin>>a;
        cin>>b;
        cin>>c;
        cin>>d;
        cin>>e;
        if((a+b)<=d && c<=e) cout<<"YES"<<endl;
        else if((a+c)<=d && b<=e) cout<<"YES"<<endl;
        else if((b+c)<=d && a<=e) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
}