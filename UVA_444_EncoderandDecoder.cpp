#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<stack>
using namespace std;

void solve(){
    string S;
    while(getline(cin,S)){
        int a;
        for (int i=S.length()-1;i>=0;i--){
            if(!isdigit(S[i])){
                int ch = S[i];
                int rev=0, Rem;
                while(ch>0){
                    Rem = ch%10;
                    ch = ch/10;
                    cout<<Rem;
                }
            }
            else{
                if(S[i]=='1'){
                    a = (S[i]-'0')*100 + (S[i-1]-'0')*10 + (S[i-2]-'0');
                    i-=2;
                }
                else{
                    a = (S[i]-'0')*10 + (S[i-1]-'0');
                    i--;
                }
                cout<<(char)a;
            }
        }
        cout<<endl;
    }

}
int main(){
    solve();
}
