#include<iostream>
using namespace std;
int main(){
    int T, cnt, lstD, lstR, mn;
    string S;
    while(cin>>T,T!=0){
        mn=T;
        lstD = -T;
        lstR = -T;
        cin>>S;
        for(int i=0;i<T;i++){
            if(S[i]=='Z'){
                mn = 0;
                break;
            }
            else if(S[i]=='R'){
                if((i-lstD)<=mn)
                    mn = (i-lstD);
                lstR = i;
            }
            else if(S[i]=='D'){
                 if((i-lstR)<=mn)
                    mn = (i-lstR);
                lstD = i;
            }
        }
        cout<<mn<<endl;

    }
}
