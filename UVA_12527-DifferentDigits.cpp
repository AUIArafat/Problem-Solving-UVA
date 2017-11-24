#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
bool checkDiff(int N){
    map<int, int>m;
    vector<int>V;
    while(N!=0){
        int temp = N%10;
        V.push_back(temp);
        m[temp]=1;
        N = N/10;
    }
    if(V.size()==m.size())
        return true;
    return false;
}
void solve(){
    int N, M,cnt;
    while((scanf("%d%d", &N, &M))!=EOF){
        cnt=0;
        for(int i=N;i<=M;i++){
            if(checkDiff(i))
                ++cnt;
        }
        cout<<cnt<<endl;
    }
}
int main(){
    solve();
}
