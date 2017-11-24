#include<iostream>
#include<bits/stdc++.h>
using namespace std;

char getCode(char S){
    if(S=='B' || S=='F' || S=='P' || S=='V')
        return '1';
    else if(S=='C' || S=='G' || S=='J' || S=='K' || S=='Q' || S=='S' || S=='X' || S=='Z')
        return '2';
    else if(S=='D' || S=='T')
        return '3';
    else if(S=='L')
        return '4';
    else if(S=='M' || S=='N')
        return '5';
    else if(S=='R')
        return '6';
    else
        return NULL;
}
void solve(){
    string S;
    while(cin>>S){
        //cin>>S;
        char temp='\0';
        for(int i=0;i<S.length();i++){
            if(getCode(S[i])!=NULL && getCode(S[i])!=temp){
                cout<<getCode(S[i]);
                temp = getCode(S[i]);
            }
            else if(getCode(S[i])==NULL) temp = getCode(S[i]);
        }
        cout<<endl;
    }
}
int main(){
    std::ios_base::sync_with_stdio(0);
    solve();
}
