#include <iostream>
using namespace std;

void ADD(int a, int b) {
    int sum = a + b;
    cout << "The sum of " << a << " and " << b << " is: " << sum << endl;
}
int main() {
    int a, b;
    cout << "Enter  first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    ADD(a, b);
    return 0;
}
