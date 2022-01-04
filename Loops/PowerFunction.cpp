#include <iostream>
using namespace std;

int main(){
    long num, pow, up;
    cin >> num >> pow;
    up =1;
    int result =1;
    while(up <= pow){
        result *= num;
        up++;
    }s
    cout << result;
}
