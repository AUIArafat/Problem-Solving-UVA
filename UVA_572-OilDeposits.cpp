#include<iostream>
#include<cstring>
using namespace std;
int row, column;
char grid[100][100];
int visited[100][100];

void floodFill(int i, int j){
    if(i<0 || j<0 || i>row-1 || j>column-1)
        return;

    if(grid[i][j]=='@' && visited[i][j]==0){
        visited[i][j] = 1;
        grid[i][j] = '+';
        floodFill(i+1, j+1);
        floodFill(i-1, j-1);
        floodFill(i-1, j+1);
        floodFill(i+1, j-1);
        floodFill(i-1, j);
        floodFill(i+1, j);
        floodFill(i, j-1);
        floodFill(i, j+1);
    }
}

int main(){
    int cnt;
    while(1){
    cnt=0;
    cin>>row>>column;
    if(row==0 && column==0)
        return 0;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++)
            cin>>grid[i][j];
    }
    memset(visited, 0, sizeof(visited));
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(grid[i][j] == '@' && visited[i][j]==0){
                floodFill(i,j);
                ++cnt;
            }
        }

    }
    cout<<cnt<<endl;
    }
}
