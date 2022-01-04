#include <iostream>
using namespace std;

int main()
{
    long num;
    cin >> num;
    int digits =0;

    if(num== 0){
        digits =1;
    }
    else if(num == -2147483648){
        digits =10;
    }
    else{
        if(num < 0){
            num = -num;
        }
        while(num >0){
        digits++;
        num = num / 10;
        }
    }
    cout << digits;


}
