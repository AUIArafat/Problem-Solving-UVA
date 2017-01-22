#include<iostream>
#include<vector>
using namespace std;
string Reverse(string S){string S1="";int j=0;for(int i=S.size()-1;i>=0;i--){S1= S1 + S[i];++j;}return S1;} //Reverse a String...
int main(){
    string S;
    int arr[10000];
    int Arr[10000];
    while(1){
        cin>>S;
        int k=0;
        for(int i=0;i<S.size();i++){
            arr[i] = (int)S[i];
        }
        for(int i=0;i<S.size();i++){
            if(arr[i]>=100){
                Arr[k] = arr[i]/100;
                int temp = (arr[i]%100)/10;
                Arr[++k] = temp;
                Arr[++k] = (arr[i]%100)%10;
                ++k;
            }
            else{
                Arr[k] = arr[i]/10;
                Arr[++k] = arr[i]%10;
                ++k;
            }
        }
        for(int i=k-1;i>=0;i--){
            cout<<Arr[i];
        }
        cout<<"\nPrinting reverse array..."<<endl;
        for(int i=k-1;i>=0;i--){
            cout<<Arr[i];
        }
    }
}
