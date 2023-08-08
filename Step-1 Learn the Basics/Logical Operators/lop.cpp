#include <iostream>

using namespace std;

int main() {

int a,b,c;
cin >> a >> b >> c;
bool result1, result2;
result1 = ( (a > b) && (b > c));
result2 =  ( (a > b) || (b > c));
cout << result1 << " " << result2;
}