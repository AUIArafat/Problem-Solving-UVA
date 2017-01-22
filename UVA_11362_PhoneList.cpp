#include<iostream>
using namespace std;
int main(){
    int T, N;
    string S;
    cin>>T;
    while(T--){
        cin>>N;
        int flag = 0;
        while(N--){
        cin>>S;
            for(int i=0;i<S.size();i++){
                if(S[i]=='9' && S[i+1]=='1' && S[i+2]=='1')
                    flag = 1;
            }
        }
        if(flag==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}
