/*#include<iostream>
#include<vector>
using namespace std;
long long F[100000000];
void Fib(){
    F[1] = 1;
    F[2] = 2;
    for(long long i=3;i<=50;i++){
        F[i] = F[i-1] + F[i-2];
    }
}
int main(){
    Fib();
    int N;
    while(cin>>N){
        if(N==0)
            return 0;
        cout<<F[N]<<endl;
    }

}*/


#include<cstdio>
long long F[55];
void Fib(){
    F[1] = 1;
    F[2] = 2;
    for(int i=3;i<=50;i++){
        F[i] = F[i-1] + F[i-2];
    }
}

int main(){
    Fib();
    int N;
    while(scanf("%d", &N)){
        if(N==0)
            return 0;
        printf("%lld\n", F[N]);
    }
}
