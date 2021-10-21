#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,sum=0;
        cin>>n;
        long long arr[n],even=0,odd=0,even1=0,odd1=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2==0) even++;
            else odd++;
        }
        for(int i=0;i<n;i++){
            if(i%2==0) even1++;
            else odd1++;
        }
        if(even1>=even && odd1>=odd){
            sum=even+odd;
        }
        else if(even1<even && odd1<odd){
            sum=even1+odd1;
        }
        else if(even1>=even && odd1<odd){
            sum=even+odd1;
        }
        else if(even1<even && odd1>=odd){
            sum=even1+odd;
        }
        cout<<sum<<endl;
    }
}
