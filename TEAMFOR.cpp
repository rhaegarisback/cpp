#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;



int main(){
    int t,siz,s10=0,s01=0,s00=0,s11=0,c0unt,s1001=0,s0110=0,s1100=0,index,ss1100,ss1101;
    string str,str1;
    string temp;
    cin>>t;
    c0unt=0;
    while (t--){
        cin>>index;
        cin>>str;
        cin>>str1;
        
        s10=0;s01=0;s00=0;s11=0;s1001=0;s0110=0;s1100=0;ss1100=0;ss1101=0;
       c0unt=0;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='1' && str1[i]=='0') temp="10";
            if(str[i]=='0' && str1[i]=='1') temp="01";
            if(str[i]=='1' && str1[i]=='1') temp="11";
            if(str[i]=='0' && str1[i]=='0') temp="00";
            
            //cout<<temp<<endl;
            if(temp=="10") {                
                s10++;}
            else if(temp=="01"){                
                s01++;}
            else if(temp=="00") {                
                s00++;}
            else if(temp=="11") {                
                s11++;}
        }
        
        //cout<<s10<<" "<<s01<<" "<<s11<<" "<<s00<<endl;
        
        c0unt=min(s10,s01);
        c0unt+=min(s11,s00);
        ss1100=min(s11,s00);
        if(s11>s00){
            c0unt+=min((s11-s00),abs(s01-s10));
            ss1101=min((s11-s00),abs(s01-s10));
        } 
        s11=s11-ss1101-ss1100;
        if(s11>0) c0unt+=int(s11/2);
        cout<<c0unt<<endl;
        
        

    } 
        
}