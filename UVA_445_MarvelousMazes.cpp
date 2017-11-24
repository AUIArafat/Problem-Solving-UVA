#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char A[1000];
    int cont;
    while(gets(A)){
        cont=0;
        for(int i=0;i<strlen(A);i++){
            if(A[i]=='!')
                cout<<endl;
            else if(A[i]>='0' && A[i]<='9')
                cont += A[i]-'0';
            else if(A[i]=='b'){
                for(int j=0;j<cont;j++)
                    cout<<" ";
                cont = 0;
            }
            else{
                for(int j=0;j<cont;j++){
                    cout<<A[i];
                }
                cont = 0;
            }
        }
        cout<<endl;
    }
}
