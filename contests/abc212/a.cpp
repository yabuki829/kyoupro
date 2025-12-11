// https://atcoder.jp/contests/abc212/tasks/abc212_a

#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    
    if (0< A && B == 0){
        cout << "Gold" << endl;
    } else if (A == 0 && 0< B){
        cout << "Silver" << endl;
    } else {
        cout << "Alloy" << endl;
    }

    return 0;
}

//  g++ -o out a.cpp 
//  ./out