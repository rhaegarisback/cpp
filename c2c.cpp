#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,mark=0,score=0,c0unt=0;
        cin>>n;
        int a[n],b[n-2];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        for(int i=0;i<n-2;i++)
        {
            b[i]=a[i];
            if(b[i]<=0){
                 mark=i;
                 c0unt++;}
        }
        for(int i=mark+1;i<n-2;i++) score+=b[i];
        if(c0unt==n-2) score=b[n-3];
        cout<<score<<endl;
    }
}