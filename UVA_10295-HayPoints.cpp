#include<iostream>
#include<map>
using namespace std;
void solve(){
    map<string, int>M;
    map<string, int>:: iterator it;
    int m,n,value, cost;
    string word, desc;
    cin>>m>>n;
    while(m--){
        cin>>word>>value;
        M[word] = value;
    }
    while(n--){
        cost=0;
        while((cin>>desc) && desc!="."){
            cost+=M[desc];
        }
        cout<<cost<<endl;
    }
}
int main(){
    solve();
}
