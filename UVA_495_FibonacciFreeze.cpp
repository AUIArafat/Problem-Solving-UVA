#include<iostream>
using namespace std;
int Fib(int N){
    if(N==0)
        return 0;
    else if(N==1)
        return 1;
    else
    return Fib(N-1)+Fib(N-2);
}
int main(){
    int N;
    while(cin>>N){
        cout<<"The Fibonacci number for "<<N<<" is "<<Fib(N)<<endl;
    }
}
