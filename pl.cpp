#include <bits/stdc++.h>
using namespace std;




int main(){
    int t,inp[6],req[2],first[2],second[2];
    cin>>t;
    while(t--){
        for (int i=0;i<6;i++)
        {
            if(i<2){
                cin>>req[i];
            }
            else if(i<4){
                cin>>first[i-2];
            }
            else{
                cin>>second[i-4];
            }
        }
        
            
            if((req[0]==first[0] && req[1]==first[1]) || (req[0]==first[1] && req[1]==first[0]))
            {
                cout<<1<<endl;
            }
            else if((req[0]==second[0] && req[1]==second[1]) || (req[0]==second[1] && req[1]==second[0]))
            {
                cout<<2<<endl;
            }
            else
            {
                cout<<0<<endl;
            }
            
    }
}