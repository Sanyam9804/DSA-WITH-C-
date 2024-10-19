# include<iostream>
using namespace std;
int main(){

    int a,sum=0,i=1;

    cout<<"ENTER A NUMBER : "<<endl;
    cin>>a;
    cout<<""<<endl;

    while(i<=a){                        // SUM OF 1 TO N NUMBER !!!!!
        sum =sum+i;
        // cout<<sum<<endl;             // SUM OF EVEN NO. TO N NUMBER i=0 , i = i+2 !!!
        // cout<<""<<endl;              // SUM OF ODD NO. TO N NUMBER i=1 , i = i+2 !!!
        i=i+1;

    }
    cout<<"VALUE OF SUM IS :"<<sum<<endl;
}