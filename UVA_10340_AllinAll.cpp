#include<iostream>
using namespace std;
int main(){
    string S, S1;
    int length, cnt;
    while(cin>>S>>S1){
        cnt=0;
        length = S.size();
        for(int i=0;i<S1.size() && cnt<length;i++){
            if(S[cnt]==S1[i])
                ++cnt;
        }
        if(cnt==length)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}
