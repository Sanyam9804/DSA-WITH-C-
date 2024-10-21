# include <iostream>
using namespace std;
int main(){
    int a =7;
    cout<<(a++)<<endl;
    // cout = 7 but a = 8      
    cout<<(a--)<<endl;
    // cout = 8 but a = 7
    cout<<(++a)<<endl;
    // cout = 8 but a = 8
    cout<<(--a)<<endl;
    // cout = 7 but a = 7
}