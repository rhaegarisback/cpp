#include <iostream>
using namespace std;

int main() {
	int t;
   
    
    cin>>t;
    while(t--){ 
        int a[5],i=0,e=0;
        for(int k=0;k<5;k++){
            cin>>a[k];
            if(a[k]==1) i++;
            else if(a[k]==2) e++;
        }
        if(i>e) cout<<"INDIA"<<endl;
        else if(e>i) cout<<"ENGLAND"<<endl;
        else cout<<"DRAW"<<endl;
    }
    
}
