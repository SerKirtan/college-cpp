//Add two matrices using default arguments
#include<iostream>
using namespace std;
void add(int row = 2, int col = 2){
    int i,j,a[row][col],b[row][col];
    cout<<"Enter elements of A matrix : ";
    for(i=0;i<row;i++)
        for(j=0;j<col;j++)
            cin>>a[i][j];
    cout<<"Enter elements of B matrix : ";
    for(i=0;i<row;i++)
        for(j=0;j<col;j++)
            cin>>b[i][j];
    cout<<"Added matrix is\n";
    for(i=0;i<row;i++){
        for(j=0;j<col;j++)
            cout<<a[i][j]+b[i][j]<<" ";
        cout<<endl;
    }
}
int main(){
    int r,c;
    cout << "Enter the size of matrix : ";
    cin>>r>>c;
    add(r,c);
}
