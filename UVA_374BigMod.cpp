#include<iostream>
#include<cstdio>
typedef unsigned long long i64;
using namespace std;

i64 bigMod(i64 B, i64 P, i64 M){
    if(P==0)
        return 1;
    else if(P%2==0){
        return (bigMod(B, P/2, M)%M * bigMod(B, P/2, M)%M)%M;
    }
    else
        return (B%M*(bigMod(B,P-1,M)%M))%M;
}
int main(){
    i64 B, P, M;
    while(cin>>B>>P>>M){
        cout<<bigMod(B, P, M)<<endl;
    }
}
