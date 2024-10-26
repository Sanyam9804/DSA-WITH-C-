# include <iostream>
using namespace std;
int main(){
    int a = 10;
    cout<< a <<endl;
    cout<<""<<endl;
    if(true){
        int a =20;              // THIS A IS ONLY FOR IF BLOCK
        cout<< a <<endl;
    }
    cout<<""<<endl;
    cout<<a<<endl;

    int i = 8;
    for(; i<8;i++){
        cout<<"HEY"<<endl;
    }
    cout<< ""<<endl;

    int z = 8;
    for(int z = 0; z<8;z++){
        cout<<"HEY"<<endl;
    }
}