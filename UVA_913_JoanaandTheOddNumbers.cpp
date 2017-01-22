#include<iostream>
using namespace std;
int main(){
    long long N, result;
    while(cin>>N){
        result = 3*(N*N-(N-1)*(N-1)/2)-6;
        cout<<result<<endl;
    }
}
//result = 3*(N*N-(N-1)*(N-1)/2)-6;
