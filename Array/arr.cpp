#include <iostream>
using namespace std;

int main(){
    int sizearr =5;
    int nums[sizearr] = {1,2,3,4,5};

    for(int c =(sizearr-1);c >=0; c--){
        cout << nums[c]<< " ";
    }
}
