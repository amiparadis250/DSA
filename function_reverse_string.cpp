#include <iostream>
using namespace std;

void reverse(string name) {
    cout<< "Reversed name: ";
    for(int i =name.size()-1; i>=0; i--) {
        cout << name[i];
    }
    
}
int main(){
reverse("I love coding");
return 0;
}
  