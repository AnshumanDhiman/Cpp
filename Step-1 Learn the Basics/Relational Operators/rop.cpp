#include<iostream>

using namespace std;

int main() {
    
    int a, b;
    cin >> a >> b;
    if(a > b) {
        cout << a << " is greater than " << b << endl;
    }
    if(a < b) {
          cout << a << " is smaller than " << b << endl;
    }
    if(a == b) {
          cout << a << " is equal to " << b << endl;
    }
    if(a != b) {
          cout << a << " is not equal to " << b << endl;
    }

    if(a >= b) {
          cout << a << " is greater than or equal to " << b << endl;
    }

    if (a <= b) {
          cout << a << " is smaller than or equal " << b << endl;
    }


}