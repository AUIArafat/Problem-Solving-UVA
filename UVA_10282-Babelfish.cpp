#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(){
    string english, foreign, input;
    char temp[100];
    map<string, string>M;
    map<string, string>:: iterator it;
    while(gets(temp)){
        if(temp[0]=='\0') break;
        stringstream ss(temp);
        ss >> english;
        ss >> foreign;
        M[foreign] = english;
    }
    while(cin>>input){
            it = M.begin();
            it = M.find(input);
            if(it!=M.end())
                cout<<it->second<<endl;
            else
                cout<<"eh"<<endl;
    }
    return;
}
int main(){
    solve();
}
