#include<iostream>
#include<cmath>
using namespace std;
int prime[32770];
void seive(){
    for(int i=0;i<=32768; i++)
        prime[i]=0;
    for(int i=4;i<=32768; i=i+2)
        prime[i]=1;
    for(int i=3;i<sqrt(32768);i++){
        if(prime[i]==0){
            for(int j=i*i;j<=32768;j=j+i)
                prime[j]=1;
        }

    }
    prime[1] = 1;

}

int main(){
    seive();
    int N, cnt;
    while(cin>>N, N!=0){
        cnt=0;
        for(int i=1;i<=N/2;i++){
            if(prime[i]==0){
                int b = N - i;
                if(prime[b]==0){
                    ++cnt;
                }
            }
        }
    cout<<cnt<<endl;
    }
}
