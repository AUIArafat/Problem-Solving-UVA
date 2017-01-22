#include<iostream>
#include<string>
#include<cstdio>
using namespace std;

int main(){
    int T, K, sum = 0;
    cin>>T;
    string s;
    while(T--){
        cin>>s;
        if(s.compare("donate")==0){
            cin>>K;
            sum = sum + K;
        }
        else{
            cout<<sum<<endl;
        }
    }
}
