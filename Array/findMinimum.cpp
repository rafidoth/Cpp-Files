#include <iostream>
using namespace std;

int main(){

    int sizearr;
    cin >> sizearr;

    int arr[sizearr];

    for(int c=0; c < sizearr; c++){
        cin >> arr[c];
    }

    int minimum = arr[0];
    for(int c=0; c<sizearr; c++){
        if(minimum>arr[c]){
            minimum = arr[c];
        }
    }

    cout << minimum;


}
