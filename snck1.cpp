#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;



int main(){
    int t;
    int a[3];
    
    cin>>t;
    while(t--){
        bool x=false;
        for(int i=0;i<=2;i++){
            cin>>a[i];
            if(a[i]==7) x=true;
        }
        if(x) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}