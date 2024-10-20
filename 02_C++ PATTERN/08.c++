#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;

    int row = 1;
    while(row<=a){
        int col = 1;
        int value = row;

        while(col<=row){
            cout<<value<<" ";
            value = value-1;
            col = col+1;
        }
        cout<<endl;
        row = row+1;
    }
}