#include<iostream>
#include<map>
#include<iomanip>
#include<cstdio>
using namespace std;
int main(){
    int T, N, Q;
    double tCost, cost;
    char ch;
    cin>>T;
    while(T--){
        string S;
        map<char, double>M;
        map<char, double>:: iterator it;
        M.clear();
        tCost = 0;
        cin>>N;
        for(int i=0;i<N;i++){
            cin>>ch>>cost;
            M[ch] = cost;
        }
        cin>>Q;
        cin.ignore();
        for(int i=0;i<Q;i++){
            getline(cin, S);
            for(int j=0;j<S.size();j++){
                it = M.find(S[j]);
                if(it!=M.end())
                    tCost += it->second;
            }
        }
        tCost = tCost/100;

        cout<<fixed<<setprecision(2)<<tCost<<"$"<<endl;
    }
}
