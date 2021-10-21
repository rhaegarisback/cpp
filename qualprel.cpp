#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n,p,c=0;
    cin>>t;
    while(t--){
        c=0;
        cin>>n;
        cin>>p;
        int inp[n];
        for(int i=0;i<n;i++){
            cin>>inp[i];
        }
        sort(inp, inp+n, greater<int>());
        for(int i=0;i<n;i++){
            if(inp[i]>=inp[p-1]) c++;
        }
        cout<<c<<endl;
    }
}