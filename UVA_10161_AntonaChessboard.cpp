#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
    long long N, X, Y, A, B, C;
    while(cin>>N, N!=0){
        A = sqrt(N);
        B = A*A;
        C = N-B;
        if(C > (A+1)){
            X = 2*A+2-C;
            Y = A+1;
        }
        else if(C<(A+1) && C>0){
            X = A+1;
            Y = C;
        }
        else if(C==0){
            X = A;
            Y = 1;
        }
        else{
            X = A+1;
            Y = A+1;
        }
        if(A%2==0){
            cout<<X<<" "<<Y<<endl;
        }
        else{
            cout<<Y<<" "<<X<<endl;
        }
    }
}
