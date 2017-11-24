#include<iostream>
#include<cmath>
using namespace std;
int prime[1000006];
void seive(){
    for(int i=0;i<=1000006; i++)
        prime[i]=0;
    for(int i=2;i<=1000006; i=i+2)
        prime[i]=1;
    for(int i=3;i<sqrt(1000006);i++){
        if(prime[i]==0){
            for(int j=i*i;j<=1000006;j=j+i)
                prime[j]=1;
        }

    }
    prime[1] = 1;

}

int main(){
    seive();
    int N;
    while(cin>>N, N!=0){
        for(int i=3;i<N;i++){
            if(prime[i]==0){
                int b = N - i;
                if(prime[b]==0){
                    cout<<N<<" = "<<i<<" + "<<b<<endl;
                    break;
                }
            }
        }
    }
}
