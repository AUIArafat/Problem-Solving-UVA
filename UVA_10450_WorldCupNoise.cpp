#include<iostream>
using namespace std;

long long ArrBit[100000];
void bitGenerate(){
    ArrBit[1] = 2;
    ArrBit[2] = 3;
    for(int i=3;i<100000;i++){
        ArrBit[i] = ArrBit[i-1] + ArrBit[i-2];
    }
}
int main(){
    bitGenerate();
    int T, N, Cnt=0;
    cin>>T;
    while(T--){
        cin>>N;
        cout<<"Scenario #"<<++Cnt<<":"<<endl;
        cout<<ArrBit[N]<<endl;
        cout<<endl;
    }
}
