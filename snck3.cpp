#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;


    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int, int> > b;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin>>temp;
            b.push_back(make_pair(temp,i));
        }
        sort(begin(b), end(b));
        int a[n],want=0;
        for (int i = 0; i < n; i++)
        {
            /* code */
            if(want<=b[i].first-1){
            a[b[i].second]=want;
            want++;
            }
            else{
                a[b[i].second]=0;
            }
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}
