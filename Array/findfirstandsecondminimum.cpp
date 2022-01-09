#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    int arr[N];
    for(int c =0; c<N;c++){
        cin >> arr[c];
    }

    int index = 0;
    for(int c=0; c<N;c++){
        if(arr[index]<arr[c]){
            index = c;
        }
    }

    int f_max = arr[index];
    cout << f_max << endl;




    int sm = 0;
    for(int c=0; c<N;c++){
        if(sm<arr[c] && c!=index){
            sm = arr[c];
        }
    }
    cout << sm;

}
