#include<iostream>
using namespace std;
int main(){
    string S;
    string temp;
    int cnt, flag;
    while(getline(cin, S)){
        flag=0;
        cnt=0;
        for(int i=0;i<S.size();i++){
            if(isalpha(S[i]) && !isalpha(S[i+1]))
                ++cnt;
        }
        cout<<cnt<<endl;
    }
}
