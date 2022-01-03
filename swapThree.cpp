
#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cin >> a>>b>>c;

    //Just swap them
    int store = a;
    a =b;
    b=c;
    c= store;

    cout << a <<" "<< b<< " " <<c;


}


