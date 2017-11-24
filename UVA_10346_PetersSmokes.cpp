#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<cmath>
using namespace std;
int main(){
    int result, temp, K, value;
    int  res, butt, N;
    while(cin>>N>>K){
        temp = N;
        res=butt=0;
        while(N>=K){
           value = N/K;
           res = res + value;
            N = (N - K*value) + value;
        }
        result = res + temp;
        cout<<result<<endl;
    }
}
