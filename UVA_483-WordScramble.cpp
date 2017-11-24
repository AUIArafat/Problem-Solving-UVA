#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void Reverse(char S[]){
    for(int i=sizeof(S)-1;i>=0;i--)
        cout<<S[i];
}
void solve(){
    while(1){
        char S[1000];
        char *tempS;
        tempS = "";
        cin>>S;
        char * pch;
        pch = strtok (S," ");
        while (pch != NULL)
        {
            Reverse(pch);
            pch = strtok (NULL, " ");
        }
    }
}
int main(){
    solve();
}
