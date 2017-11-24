#include<iostream>
using namespace std;
long long ArrFact[100000];
void Fact(){
    ArrFact[0]=1;
    ArrFact[1]=1;
    for(int i=2;i<10000;i++){
        ArrFact[i] = ArrFact[i-1]*i;
    }
}
int main(){
    Fact();
    int N;
    cin>>N;
    cout<<ArrFact[N]<<endl;
}
