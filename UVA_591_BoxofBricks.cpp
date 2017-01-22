#include<iostream>
using namespace std;

int main(){
    int N;
    int A[200];
    int Sum, Avg, Move, Cnt = 0;
    while(cin>>N){
        ++Cnt;
        Sum = 0;
        Move = 0;
        if(N==0)
            return 0;
        for(int i=0;i<N;i++){
            cin>>A[i];
            Sum =  Sum + A[i];
        }
        Avg = Sum/N;
        for(int i=0;i<N;i++){
            if(A[i]>Avg)
                Move = Move + (A[i]-Avg);
        }
        cout<<"Set #"<<Cnt<<endl;
        cout<<"The minimum number of moves is "<<Move<<"."<<endl;
        cout<<endl;
    }
}
