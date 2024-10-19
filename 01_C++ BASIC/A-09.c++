#include<iostream>
using namespace std;
int main(){

    int a;
    int i =2;

    cout<<"ENTER YOUR NUMBER :"<<endl;
    cin>>a;
    cout<<""<<endl;

    while (i<a){
        if(a%i==0){
            cout<<"NOT PRIME"<<endl;
        }
        else if(a%i!=0){
            cout<<"PRIME"<<endl;
            break;
        }
        i = i+1;
    }

}