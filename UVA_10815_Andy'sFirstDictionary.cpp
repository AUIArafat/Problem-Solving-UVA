#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string S;
    string temp="";
    set<string> word;
    set<string>:: iterator it;
    while(cin>>S){
        for(int i=0;i<=S.size();i++)
            if(S[i]>='A' && S[i]<='Z')
                S[i] += 32;
        for(int i=0;i<=S.size();i++){
            if(isalpha(S[i]))
                temp +=S[i];
            else{
                if(temp.size())
                    word.insert(temp);
                temp = "";
            }

        }
    }
    it = word.begin();
        while(it!=word.end()){
            cout<<*it<<endl;
            ++it;
        }
}
