#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int T, L, cnt;
    int arrCarriage[100000];
    cin>>T;
    while(T--){
        cnt=0;
        cin>>L;
        for(int i=0;i<L;i++){
            cin>>arrCarriage[i];
        }
        for(int i=0;i<L;i++){
            for(int j=i+1;j<L;j++){
                if(arrCarriage[i]>arrCarriage[j]){
                    swap(arrCarriage[i], arrCarriage[j]);
                    ++cnt;
                }

            }

        }
        cout<<"Optimal train swapping takes "<<cnt<<" swaps."<<endl;
    }
}
