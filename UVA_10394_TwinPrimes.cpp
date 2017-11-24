/**
Usually the pair (2, 3) is not considered to be a pair of twin primes.[7] Since 2 is the only even prime,
this pair is the only pair of prime numbers that differ by one; thus twin primes are as closely spaced as
possible for two primes.

The first few twin prime pairs are:
(3, 5), (5, 7), (11, 13), (17, 19), (29, 31), (41, 43), (59, 61), (71, 73), (101, 103), (107, 109), (137, 139)....
Every twin prime pair except (3, 5) is of the form (6n − 1, 6n + 1) for some natural number n; that is, the number between
the two primes is a multiple of 6.
**/

#include<iostream>
#include<cmath>
#include<algorithm>
#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
long long prime[20000006], p1[20000006];
void seive(){
    for(int i=0;i<=20000006; i++)
        prime[i]=0;
    for(int i=4;i<=20000006; i=i+2)
        prime[i]=1;
    for(int i=3;i<sqrt(20000006);i++){
        if(prime[i]==0){
            for(int j=i*i;j<=20000006;j=j+i)
                prime[j]=1;
        }

    }
    prime[1] = 1;
}

void twinPrime(){
    int cnt=1;
    for(int i=2;i<=20000006;i++){
        if(prime[i]==0 && prime[i+2]==0){
            p1[cnt] = i;
            ++cnt;
        }
    }
}

int main(){
    int N;
    seive();
    twinPrime();
    while(scanf("%d", &N)==1){
        if(N==1)
            cout<<"("<<3<<", "<<5<<")"<<endl;
        else{
            cout<<"("<<p1[N]<<", "<<p1[N]+2<<")"<<endl;
        }
    }
}
