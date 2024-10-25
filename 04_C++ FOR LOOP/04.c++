# include <iostream>
using namespace std;
int main(){
    int n;
    int a = 0;
    int b = 1;
    int i = 0;
    int fib = 0;
    cin>>n;
    cout<<a<<" "<<b<<" ";

    for(i = 0; i<n;i++){

        fib = a+b;
        cout<<fib<<" ";
        a = b;
        b = fib;
    }
    
}