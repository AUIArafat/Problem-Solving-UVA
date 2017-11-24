#include<iostream>
#include<map>
using namespace std;
void solve(){
    int T,N,D, time, due, cnt=0;
    string subject;
    cin>>T;
    while(T--){
        cin>>N;
        map<string, int>M;
        while(N--){
            cin>>subject>>time;
            M[subject] = time;
        }
        cin>>D;
        cin>>subject;
        cout<<"Case "<<++cnt<<": ";
        if(M[subject]==0)
            cout<<"Do your own homework!"<<endl;
        else if(M[subject]<= D)
            cout<<"Yesss"<<endl;
        else if(M[subject]<=D+5)
            cout<<"Late"<<endl;
        else
            cout<<"Do your own homework!"<<endl;
    }
}
int main(){
    solve();
}
