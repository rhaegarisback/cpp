#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int t;


    cin>>t;
    while(t--){
        ll n,q;
        cin>>n>>q;
        ll medal[n][3];
        for(int i=0;i<n;i++){
            cin>>medal[0][i];
            cin>>medal[1][i];
            cin>>medal[2][i];
        }
        vector<pair<int, int>> ordg,ords,ordb;
        for (int i = 0; i < n; i++)
        {
            ordg.push_back(medal[0][i],i);
						ords.push_back(medal[1][i],i);
						ordb.push_back(medal[2][i],i);
        }

      while(q--){
				ll r;
				cin>>r;
				for(ll i=0;i<n;i++){
					if(r<=ordb[i].first){
						ordg[0][0].first+=ordb[i].first;
						r-=ordb[i];
					}
				}
					for(ll i=0;i<n;i++){
						if(r<=ords[i].first){
							ordg[0][0].first+=ords[i].first;
							r-=ords[i];
						}
					}
						for(ll i=0;i<n;i++){
							if(r<=ordg[i].first){
								ordg[0][0].first+=ordg[i].first;
								r-=ordg[i];
							}
						}
						sort(begin(ordg),end(ordg));
							}
						}
				}
			}

    }
}
