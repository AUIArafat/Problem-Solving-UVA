#include<iostream>
using namespace std;

void solve(){
    int G;
    string S, S1;
    while(1){
        S="";
        S1="";
        cin>>G;
        if(G==0) return;
        cin>>S;
        int N = S.length()/G;
        for(int i=0;i<S.length();){
            int j;
            for(j=i+N-1; j>=i;j--){
                S1 = S1 + S[j];
            }
            i=i+N;
        }
        cout<<S1<<endl;
    }
}
int main(){
    solve();
}
