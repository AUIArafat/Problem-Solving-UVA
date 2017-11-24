#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
void solve(){
    int N,M, cnt;
    while(1){
        cnt=0;
        map<int, int> Map;
        Map.clear();
        cin>>N>>M;
        if(N==0 || M==0){
            return;
        }
        int jack;
        int jill;
        for(int i=0;i<N;i++){
            cin>>jack;
            Map[jack] = 1;

        }
        for(int i=0;i<M;i++){
            cin>>jill;
            if(Map[jill]) ++cnt;
        }
        cout<<cnt<<endl;
    }
}
int main(){
    solve();
}
