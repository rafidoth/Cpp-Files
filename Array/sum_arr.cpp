#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int sum =0;
    for(int i=0;i<n;i++){
        if(i<(n-1)){
            int temp_sum=arr[i]+ arr[i+1];
            if(temp_sum>sum){
                sum = temp_sum;
            }
        }
        else if(i==(n-1)){
            int temp_sum = arr[n-1] + arr[0];
            if(sum >temp_sum){
                sum = temp_sum;
            }
        }
    }

    cout << sum;

}
