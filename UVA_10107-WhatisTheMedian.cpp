#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void solve(){
    vector<long long>V;
    long long N,left, right, median;
    while(cin>>N){
        V.push_back(N);
        sort(V.begin(), V.end());
        if(V.size()==1)
            cout<<N<<endl;
        else if(V.size()%2==0){
            left = V[V.size()/2-1];
            right = V[V.size()/2];
            median = (left+right)/2;
            cout<<median<<endl;
        }
        else{
            median = V[V.size()/2];
            cout<<median<<endl;
        }
    }
}
int main(){
    solve();
}
