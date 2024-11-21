#include <iostream>
using namespace std;

int main() {

    string name;
    cout << "Enter your name:";
    cin >> name;
    cout << "Reversed name: ";
    for (int i = name.size() - 1; i >= 0; i--) {
        cout << name[i];
    }
    cout << endl;

    return 0;
}


// 

