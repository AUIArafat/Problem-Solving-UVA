#include<iostream>
using namespace std;
long long arrM[10000], arrT[10000];
void countBee(){
    arrT[0] = 1;
    arrT[1] = 2;
    arrM[0] = 0;
    arrM[1] = 1;
    for(int i=2;i<10000;i++){
        arrM[i] = arrT[i-1];
        arrT[i] = arrT[i-1] + arrT[i-2] + 1;
    }
}
int main(){
    countBee();
    int N;
    while(1){
        cin>>N;
        if(N==-1)
            return 0;
        cout<<arrM[N]<<" "<<arrT[N]<<endl;
    }
}
