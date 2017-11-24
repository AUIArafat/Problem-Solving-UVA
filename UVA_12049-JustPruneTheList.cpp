#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void solve(){
    int T,N,M, list1[10005], list2[10005];
    cin>>T;
    while(T--){
        cin>>N>>M;
        vector<int> V(N+M);
        vector<int> ::iterator it;
        for(int i=0;i<N;i++){
            cin>>list1[i];
        }
        for(int i=0;i<M;i++){
            cin>>list2[i];
        }
        sort(list1, list1+N);
        sort(list2, list2+M);
        it = set_intersection(list1, list1+N, list2, list2+M, V.begin());
        V.resize(it-V.begin());
        cout<<((N+M)-V.size()*2)<<endl;
    }
}
int main(){
    solve();
}
