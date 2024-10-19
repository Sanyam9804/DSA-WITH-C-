#include <iostream>
using namespace std;
int main(){
    int a,b;
    char c;
    cout<<"ENTER THE FIRSTE NO A :"<<endl;
    cin>>a;
    
    cout<<"ENTER THE SECOND NO B :"<<endl;
    cin>>b;


    if (a>b){
        cout<<"A is greater than B"<<endl;
        cout<<""<<endl;
    }
    else if (a<b){
        cout<<"B is greater than A"<<endl;
        cout<<""<<endl;
    }
    else{
        cout<<"INVALID !!!!"<<endl;
        cout<<""<<endl;
    }

    cout<<"ENTER A CHARACTER : "<<endl;
    cin>>c;
    if(islower(c)){
        cout<<"THE CHARACTER IS LOWER CASE"<<endl;
        cout<<""<<endl;
    }
    else if(isupper(c)){
        cout<<"THE CHARACTER IS UPPER CASE"<<endl;
        cout<<""<<endl;
    }

}