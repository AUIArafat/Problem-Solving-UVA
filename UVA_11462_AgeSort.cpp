//Counting sort : is a sorting technique based on keys between a specific range.
//It works by counting the number of objects having distinct key values (kind of hashing).
//Then doing some arithmetic to calculate the position of each object in the output sequence.

/*Time Complexity:
    O(n+k) where n is the number of elements in input array and k is the range of input.

Auxiliary Space: O(n+k)

Points to be noted:
1. Counting sort is efficient if the range of input data is not significantly greater than the number
   of objects to be sorted. Consider the situation where the input sequence is between range 1 to 10K
   and the data is 10, 5, 10K, 5K.
2. It is not a comparison based sorting. It running time complexity is O(n) with space proportional to the range of data.
3. It is often used as a sub-routine to another sorting algorithm like radix sort.
4. Counting sort uses a partial hashing to count the occurrence of the data object in O(1).
5. Counting sort can be extended to work for negative inputs also.
*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
//#define sz 2000006;
using namespace std;
int inputArr[2000006];
int countArr[2000006];
int outputArr[2000006];
int main(){
    //vector<int>::iterator maxValue;
    int sz;
    while(1){
        cin>>sz;
        if(sz==0) return 0;
        for(int i=0;i<sz;i++){
            cin>>inputArr[i];
        }
        //cout<<maxValue<<endl;
        memset(countArr, 0, sizeof(countArr));
        for(int i=0;i<sz;i++){
            ++countArr[inputArr[i]];
        }
        for(int i=1;i<2000006;i++){
            countArr[i]+=countArr[i-1];
        }
        for(int i=0;i<sz;i++){
            outputArr[countArr[inputArr[i]]] = inputArr[i];
            --countArr[inputArr[i]];
        }
        for(int i=1;i<=sz-1;i++){
            cout<<outputArr[i]<<" ";
        }
        cout<<outputArr[sz]<<endl;
    }
}
