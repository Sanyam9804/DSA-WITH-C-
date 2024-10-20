#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"ENTER YOUR NUMBER";
    cin>>a;

    int row = 1;
    int count =1;
    while(row<=a){
        int col = 1;

        while(col<=row){
                cout<<count;
                count =count+1;
                col = col+1;
        }
        cout<<endl;
        row =row+1;
    }
}