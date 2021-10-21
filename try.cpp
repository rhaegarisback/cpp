#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main() {
    string inp="program";
    string op=inp;
    int len=7;
    bool casee= false;
    do{
        for(int i=0;i<len;i++)
            {
                if(i<(len-1)){
                    op[i+1]=inp[i];
                }
                else{
                    op[0]=inp[i];
                }       
            }
            for(int i=0;i<len;i++)
            {
                if(op[i]==inp[i])
                {
                    casee==true;
                    break;
                }
            }
    }while(casee);
    cout<<op;
}