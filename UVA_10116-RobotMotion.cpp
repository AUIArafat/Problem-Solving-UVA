#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef pair<long long, long long>Pii;
char Inst[10000][10000];
int trac[10000][10000], find1, find2;
void solve(){
    int R, C, S, cnt;
    while(1){
        cin>>R>>C>>S;
        if(R == 0 && C == 0 && S == 0) return;
        for(int i=1;i<=R;i++){
            for(int j=1;j<=C;j++){
                cin>>Inst[i][j];
            }
        }
        int i=1, j=S;
        vector<Pii> V;
        for(int i=0;i<=R+2;i++){
            for(int j=0;j<=C+2;j++){
                trac[i][j]=0;
            }
        }
        cnt=0;
        while(1){
            if(i==0 || j==0 || i>R || j>C){
                cout<<cnt<<" step(s) to exit"<<endl;
                break;
            }
            if(Inst[i][j]=='N'){
                ++cnt;
                trac[i][j]++;
                if(trac[i][j]==2) {find1 = i; find2 = j;break;}
                V.push_back(make_pair(i,j));
                i = i-1;

            }
            else if(Inst[i][j]=='S'){
                ++cnt;
                trac[i][j]++;
                if(trac[i][j]==2){find1 = i; find2 = j;break;}
                V.push_back(make_pair(i,j));
                i = i+1;
            }
            else if(Inst[i][j]=='E'){
                ++cnt;
                trac[i][j]++;
                if(trac[i][j]==2) {find1 = i; find2 = j;break;}
                V.push_back(make_pair(i,j));
                j = j+1;
            }
            else if(Inst[i][j]=='W'){
                ++cnt;
                trac[i][j]++;
                if(trac[i][j]==2) {find1 = i; find2 = j;break;}
                V.push_back(make_pair(i,j));
                j = j-1;
            }
        }
        for(int i=0;i<V.size();i++){
            if(V[i].first == find1 && V[i].second == find2){
                cout<<i<<" step(s) before a loop of "<<cnt-i-1<<" step(s)"<<endl;
                break;
            }
        }
    }

}

int main(){
    solve();
}
