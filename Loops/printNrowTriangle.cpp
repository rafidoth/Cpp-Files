#include <iostream>
using namespace std;

int main(){
    int N ;
    cin >> N;
    int i =1;

    while(i <=N){
        int j =1;
        while(i<=j){
            cout << "*";
            j++;
        }
        cout << endl;
        i++;

    }
    return 0;

}
