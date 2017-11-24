#include<iostream>
#include<cstdio>
#include<map>
#include<algorithm>
using namespace std;
int main(){
    int Arr[100], result[100], mn, index=0;
    string str[6]={"BCG", "BGC", "CBG", "CGB", "GBC", "GCB"};
    while(cin>>Arr[0]>>Arr[1]>>Arr[2]>>Arr[3]>>Arr[4]>>Arr[5]>>Arr[6]>>Arr[7]>>Arr[8]){
        mn=2147483647;
        for(int i=0;i<6;i++){
            if(i==0){
                result[i] = Arr[1] + Arr[2] + Arr[3] + Arr[4] + Arr[6] + Arr[8];
                if(result[i]<mn){
                    mn = result[i];
                    index = i;
                }
            }
            else if(i==1){
                result[i] = Arr[1] + Arr[2] + Arr[3] + Arr[5] + Arr[6] + Arr[7];
                if(result[i]<mn){
                    mn = result[i];
                    index = i;
                }
            }
            else if(i==2){
                result[i] = Arr[0] + Arr[1] + Arr[4] + Arr[5] + Arr[6] + Arr[8];
                if(result[i]<mn){
                    mn = result[i];
                    index = i;
                }
            }
            else if(i==3){
                result[i] = Arr[0] + Arr[1] + Arr[3] + Arr[5] + Arr[7] + Arr[8];
                if(result[i]<mn){
                    mn = result[i];
                    index = i;
                }
            }
            else if(i==4){
                result[i] = Arr[0] + Arr[2] + Arr[4] + Arr[5] + Arr[6] + Arr[7];
                if(result[i]<mn){
                    mn = result[i];
                    index = i;
                }
            }
            else if(i==5){
                result[i] = Arr[0] + Arr[2] + Arr[3] + Arr[4] + Arr[7] + Arr[8];
                if(result[i]<mn){
                    mn = result[i];
                    index = i;
                }
            }

        }
       cout<<str[index]<<" "<<mn<<endl;
    }
}
