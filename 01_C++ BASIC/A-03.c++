#include<iostream>
using namespace std;
int main(){

    int a = 10/3;
    cout<<a<<endl;      //int/int = int
    cout<<""<<endl;

    float b = 10/3;
    cout<<b<<endl;      //int/int = int
    cout<<""<<endl;

    float c = 10.0/3;
    cout<<c<<endl;      //float/int = float
    cout<<""<<endl;

    int A = 10;
    int B = 20;
    bool C = (A<=B);       // BOOLEAN USE !!!!! WITH ARITHMETIC OPERATIONS
    bool C1 = (A==B);
    bool C2= (A>=B);
    bool C3= (A<B);
    bool C4= (A!=B);
    cout<<C<<endl;
    cout<<""<<endl;
    cout<<C1<<endl;
    cout<<""<<endl;
    cout<<C2<<endl;
    cout<<""<<endl;
    cout<<C3<<endl;
    cout<<""<<endl;
    cout<<C4<<endl;
    cout<<""<<endl;

}