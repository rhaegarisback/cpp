#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
        long long n,sum=0;
        cin>>n;
        long long arr[n];
        for(long long i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n,greater<long long>());
        sum=arr[0];
            for(long long i=1;i<n/2;i++){
                sum+=2*arr[i];
            }

        cout<<sum<<endl;
    
}