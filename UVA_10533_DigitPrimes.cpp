#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cmath>
using namespace std;
#define LIMIT 1000000

//Hints : Cumulative Sum
long long prime[LIMIT], digit[LIMIT];
void seive(){
    for(int i=0;i<=LIMIT; i++)
        prime[i]=0;
    for(int i=4;i<=LIMIT; i=i+2)
        prime[i]=1;
    for(int i=3;i<sqrt(LIMIT);i++){
        if(prime[i]==0){
            for(int j=i*i;j<=LIMIT;j=j+i)
                prime[j]=1;
        }

    }
    prime[1] = 1;
}

void digitPrime(){
    digit[0]=0;
    digit[1]=0;
    for(int j=2;j<=LIMIT;j++){
        digit[j]=digit[j-1];
        if(prime[j]==0){
            int digitSum=0;
            for(int i=j; i;i/=10){
                digitSum = digitSum + i%10;
            }
            if(prime[digitSum]==0){
                digit[j]++;
            }
        }
    }
}
int main(){
    seive();
    digitPrime();
    int N, t1, t2, cnt;
    scanf("%d", &N);
    while(N--){
        cnt=0;
        scanf("%d %d", &t1, &t2);
        printf("%d\n", digit[t2]-digit[t1-1]);
    }
}
