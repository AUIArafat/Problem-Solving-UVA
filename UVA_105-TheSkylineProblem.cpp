#include<iostream>
using namespace std;
void solve(){
    int L, H, R;
    int Height[100000];
    while(cin>>L>>H>>R){
        for(int i=L; i<R;i++){
            if(H>Height[i])
                Height[i]=H;
        }
    }
    int CurrHeight = 0;
    bool notFirst = false;
    for(int pos=0;pos!=10000;pos++){
        if(Height[pos]!=CurrHeight){
            if (notFirst)
                cout << ' ';
            else    notFirst = true;
            cout<<pos<<" "<<Height[pos];
            CurrHeight = Height[pos];
        }
    }
    cout<<endl;
}
int main(){
    solve();
}
