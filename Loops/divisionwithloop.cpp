#include <iostream>
using namespace std;

int main(){
    double a,b;


    while(true){
        cin >> a >>b;
        if(b==0){
            cout << "b can't be 0. Try again";
            //break;
            continue;
        }

        cout << a/b <<endl;
    }
}
