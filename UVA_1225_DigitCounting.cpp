#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int T,N;
    char ch;
    cin>>T;
    int digit[20];
    while(T--){
        memset(digit, 0, sizeof digit);
        cin>>N;
        for(int i=1;i<=N;i++){
            int temp = i;
            while(temp){
                ++digit[temp%10];
                temp/=10;
            }
        }
        for(int i=0;i<=8;i++){
            cout<<digit[i]<<" ";
        }
        cout<<digit[9]<<endl;
    }
}
