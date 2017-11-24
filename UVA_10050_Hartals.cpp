#include<iostream>
using namespace std;
int main(){
    int T, arr[110], found, cnt;
    cin>>T;
    while(T--){
        cnt=0;
        int N, P;
        cin>>N>>P;
        for(int i=1;i<=P;i++)
            cin>>arr[i];
        for(int i=1;i<=N;i++){
            if(i%7==6 || i%7==0)
                continue;
            found=0;
            for(int j=1;j<=P;j++){
                if(i%arr[j]==0)
                    found = 1;
            }
            if(found==1)
                ++cnt;
        }
    cout<<cnt<<endl;
    }
}
