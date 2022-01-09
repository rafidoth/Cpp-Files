#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i=0;i<n; i++){
        cin >> arr[i];
    }
    int max1, max2;
    if(arr[0]>arr[1]){
        max1 = arr[0];
        max2 = arr[1];
    }
    else{
        max1 = arr[1];
        max2 = arr[0];
    }

    for(int c=2; c<n;c++){
        if(max1 <= arr[c]){
            max2 = max1;
            max1 = arr[c];
        }
        else if(max2 < arr[c]){
            max2 = arr[c];
        }
    }

    cout << max1 << "  "<< max2;


}
