#include <iostream>
using namespace std;

int main() {
	int t;
    cin>>t;
    int x=1;
    while(t--){
        int n,d,c,m,nd=0,nc=0,nod=0;
        cin>>n;
        cin>>d;
        cin>>c;
        cin>>m;
        string ord,op="YES";
        cin>>ord;
        for(int i=0;i<n;i++){
            if(ord[i]=='C'){
                nc++;
            }
            else if(ord[i]=='D'){
                nd++;
            }
        }
        for(int i=0;i<n;i++){
            if(d==0 && nod<nd){
                op="NO";
                break;
            }
            if(i==0 && ord[i]=='C' && c==0){
                op="NO";
                break;
            }
            if(ord[i]=='C'){
                c--;
            }
            else if(ord[i]=='D'){
                d--;
                c+=m;
                nod++;
            }
            if((c<=0 && (ord[i+1]=='C' || ord[i]=='C') && nod<nd)){
                op="NO";
                break;
            }
        }
        
        if(nd==0){
                op="YES";
            }
        cout<<"Case #"<<x<<": "<<op<<endl;
        x++;

    }
}