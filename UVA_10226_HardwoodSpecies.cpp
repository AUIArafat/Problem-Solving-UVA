#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
void solve(){
    vector<string>V;
    map<string, int>M;
    map<string, int>:: iterator it;
    int T, total_tree;
    cin>>T;
    string S, dummy;
    getline(cin, dummy);
    getline(cin, dummy);
    while(T--){
        total_tree=0;
        M.clear();
        while(true){
            getline(cin, S);
            if(S[0]=='\0') break;
            if (M[S]==0) M[S];
            M[S]++;
            ++total_tree;
        }
        it = M.begin();
        while(it!=M.end()){
            double value = (it->second*100.00)/(double)total_tree;
            cout<<it->first;
            printf(" %0.4lf\n", value);
            ++it;
        }
        if(T) cout<<endl;
    }


}
int main(){
    solve();
}
