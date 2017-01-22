#include<iostream>
#include<cmath>

using namespace std;
int main(){
    long long T, Result;
    cin>>T;
    long long N;
    while(T--){
        cin>>N;
        Result = ((-1)+sqrt(1+4*2*N))/2;
        cout<<Result<<endl;
    }
}
