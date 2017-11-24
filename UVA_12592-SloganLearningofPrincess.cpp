#include<iostream>
#include<map>
#include<string>
using namespace std;
void solve(){
    int N,Q;
    cin>>N;
    cin.ignore();
    string S1, S2, S3;;
    map<string, string>M;
    while(N--){
        getline(cin,S1,'\n');
        getline(cin,S2,'\n');
        M[S1]=S2;
    }
    cin>>Q;
    cin.ignore();
    while(Q--){
        getline(cin, S3,'\n');
        cout<<M[S3]<<endl;
    }
}
int main(){
    solve();
}
