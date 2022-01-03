
#include <iostream>
using namespace std;

int main(){
    //data types declaration=
    string name1, name2, id1, id2; // id could have letters
    double grade1, grade2;

    //student 1
    cout << "What is student's name ?";
    cin >> name1;
    cout<< "His id ?";
    cin >> id1;
    cout << "His math exam grade ?";
    cin >> grade1;

    //student 2
    cout << "What is student's name ?";
    cin >> name2;
    cout<< "His id ?";
    cin >> id2;
    cout << "His math exam grade ?";
    cin >> grade2;

    // final output
    cout <<"\n \n \n" <<name1 << " with id " << id1 << "got " <<grade1 <<" in math exam."<< endl;
    cout << endl<< endl;
    cout << name2 << " with id " << id2 << "got " <<grade2 <<" in math exam."<< endl;

}
