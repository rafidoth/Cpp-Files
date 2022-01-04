#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    int start = 1;

    while(start <= N){
        if(start %3 == 0){
            cout << start << ", ";
        }
        start++;
    }
    return 0;
}
